from pop import GPS
from pop import time

gps = GPS()

while True:
    data = gps.read()
    print(data)