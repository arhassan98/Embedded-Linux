# 7. Write a python program to parse header file and read
# all prototypes of function and insert it into
# excel sheet with unique ID start with IDX0

import sys
import subprocess
import pandas as pd
from pycparser import c_parser, c_ast

def preprocess_header_file(header_file):
    try:
        # Use gcc preprocessor to remove preprocessor directives
        result = subprocess.run(["gcc", "-E", header_file], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
        if result.returncode != 0:
            print(f"Error preprocessing header file: {result.stderr}")
            return None
        return result.stdout
    except Exception as e:
        print(f"Error preprocessing header file: {e}")
        return None

def parse_header_code(header_code):
    # Create a DataFrame to store function prototypes
    df = pd.DataFrame(columns=["ID", "Return Type", "Function Name"])
    
    # Define a dictionary to store function prototypes with unique IDs
    function_prototypes = {}
    
    # Parse the preprocessed header code using pycparser
    parser = c_parser.CParser()
    try:
        ast = parser.parse(header_code)
    except Exception as e:
        print(f"Error parsing header code: {e}")
        return None
    
    # Traverse the AST to find function prototypes
    class FuncDefVisitor(c_ast.NodeVisitor):
        def visit_FuncDecl(self, node):
            return_type = node.type.type.names[-1]
            function_name = node.type.declname
            function_key = f"{function_name}({return_type})"
            
            if function_key not in function_prototypes:
                unique_id = len(function_prototypes)
                function_prototypes[function_key] = unique_id
                df.loc[unique_id] = [f"IDX{unique_id}", return_type, function_name]
    
    FuncDefVisitor().visit(ast)
    
    return df

def parse_header_file(header_file):
    header_code = preprocess_header_file(header_file)
    if header_code is not None:
        df = parse_header_code(header_code)
        if df is not None:
            # Save the DataFrame to an Excel file
            excel_file = f"{header_file}.xlsx"
            df.to_excel(excel_file, index=False)
            print(f"Function prototypes extracted and saved to '{excel_file}'.")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script_name.py header_file.h")
    else:
        header_file = sys.argv[1]
        parse_header_file(header_file)