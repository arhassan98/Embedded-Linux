# Battery Monitor

This Python program monitors the battery percentage of a system and displays a notification if the battery level is below a certain threshold.

## Dependencies

This program requires the following dependencies to be installed:

- Python 3.x
- psutil
- plyer

You can install the dependencies using the following command:

```shell
pip install psutil plyer
```

## Usage

To run the program, execute the following code:

```shell
python battery_monitor.py
```

Replace `battery_monitor.py` with the actual name of the Python script file.

## Program Flow

1. The program imports the necessary modules: `psutil` for accessing system battery information and `plyer` for displaying notifications.

2. The program defines a function `check_battery()` that continuously checks the battery percentage and displays a notification if it falls below a threshold.

3. Inside the `check_battery()` function, there is an infinite loop that repeatedly checks the battery percentage.

4. The current battery percentage is obtained using `psutil.sensors_battery()`.

5. If the battery percentage is below the threshold (92 in this case), a notification is displayed using `notification.notify()` from the `plyer` module. The notification includes the battery level information.

6. The program waits for 60 seconds using `time.sleep(60)` before checking the battery level again.

7. The program runs indefinitely until manually terminated.

## Example

Here's an example of running the program:

```shell
python battery_monitor.py
```

Assuming the battery level is below 92%, the program will display a notification with the battery level information.