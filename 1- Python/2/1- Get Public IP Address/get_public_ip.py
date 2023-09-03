# 1. Write a code to suggest automatically activates for you:
# Get your public IP with this API: https://api.ipify.org/?format=json

# First install requests by: pip install requests
import requests

# Function to get the public IP address
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

# Main program
if __name__ == "__main__":
    public_ip = get_public_ip()
    if public_ip:
        print(f"Your public IP address is: {public_ip}")
    else:
        print("Failed to retrieve public IP address.")