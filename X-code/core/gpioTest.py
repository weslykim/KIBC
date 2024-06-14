from machine import Pin
import time

led = Pin("D9", Pin.OUT, value = 1)
hz50 = 1 / 50

led.value(0)
time.sleep(2)

for _ in range(1, 500 * 2 + 1):
    led.value(0)
    print(led.value(), end = '')
    time.sleep_ms(int(hz50 * 1000 / 2))
    led.value(1)
    time.sleep_ms(int(hz50 * 1000 / 2))
    
    if i % 20:
        print(led.value(), end = '')
    else:
        print(led.value())
