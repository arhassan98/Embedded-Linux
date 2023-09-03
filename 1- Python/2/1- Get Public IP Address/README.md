# Get Public IP Address

This code retrieves the public IP address by making a request to the `https://api.ipify.org/?format=json` API endpoint.

## Prerequisites

Before running the code, make sure you have the `requests` library installed. You can install it by running the following command:

```shell
pip install requests
```

## Code

```python
import requests

def get_public_ip():
    """
    Get the public IP address.
    
    Returns:
        str: The public IP address.
    """
    try:
        response = requests.get("https://api.ipify.org/?format=json")
        response.raise_for_status()
        ip_data = response.json()
        return ip_data['ip']
    except requests.exceptions.RequestException as e:
        print(f"Error: {e}")
        return None

if __name__ == "__main__":
    public_ip = get_public_ip()
    if public_ip:
        print(f"Your public IP address is: {public_ip}")
    else:
        print("Failed to retrieve public IP address.")
```

## Usage

To use this code, follow these steps:

1. Install the `requests` library if you haven't already (see prerequisites section).
2. Copy the code into a Python file (e.g., `get_public_ip.py`).
3. Run the Python file using the command `python3 get_public_ip.py`.
4. The program will retrieve your public IP address and display it on the console if successful.

Note: If the public IP address retrieval fails, an error message will be displayed.

Make sure you have an active internet connection for the code to work properly.