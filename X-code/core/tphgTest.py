from pop import time
from pop import Tphg

tphg = Tphg()

t0 = time.ticks_ms()

while True:
    if time.ticks_ms() - t0 >= 100:
        t0 = time.ticks_ms()
        
        t, p, h, g = tphg.read()
        print("%.2f %.2f %.2f %d"%(t, p, h, g))