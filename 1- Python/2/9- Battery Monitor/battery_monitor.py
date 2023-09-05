# 9. Write a python program to monitor the battery percentage,
# and displays a notification when the battery level falls below a certain threshold.

import psutil
from plyer import notification
import time

# Function to check battery percentage and display a notification if it's below the threshold


def check_battery():
    while True:
        battery = psutil.sensors_battery()
        if battery.percent < 92:
            message = f"Battery level is {battery.percent}%."
            notification.notify(
                title="Low Battery Warning",
                message=message,
                app_name="Battery Monitor",
                timeout=10  # Notification timeout in seconds
            )
        time.sleep(60)  # Check every 60 seconds


if __name__ == "__main__":
    check_battery()
