from pop import Leds
from pop import Buttons
from pop import time
from pop import Buzzer

leds = Leds()
button = Buttons()
buzzer = Buzzer()
b = 0
ptime = time.ticks_ms()
ptime2 = time.ticks_ms()
ledIndex = 0
b_state = 2
buzzer_on = False

while True:
    b = button.read()
    if b == 1 and b_state == 2:
        b_state = 1
        buzzer.beep(5)
        buzzer_on = True
    elif b == 2 and b_state == 1:
        b_state = 2
        buzzer.beep(5)
        buzzer_on = True
    
    if buzzer_on:
        buzzer.on()
        if time.ticks_ms() - ptime2 > 500:
            buzzer_on = False
            buzzer.off()
            

    if b_state == 1:
        if time.ticks_ms() - ptime > 200:
            leds[ledIndex] = True
            ledIndex += 1
            if ledIndex > 7:
                ledIndex = 0
            ptime = time.ticks_ms()
    elif b_state == 2:
        if time.ticks_ms() - ptime > 200:
            leds[ledIndex] = False
            ledIndex += 1
            if ledIndex > 7:
                ledIndex = 0
            ptime = time.ticks_ms()
