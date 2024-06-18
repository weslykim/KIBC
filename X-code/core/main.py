from pop import time, Led
led = Led()
for i in range(10):
    print("Hello XNode", i)
    if i % 2:
        led.on()
    else:
        led.off()
    time.sleep(3)
    
print("Good-Bye")
