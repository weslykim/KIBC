from pop import AmbientLight
from pop import time

l = AmbientLight()

for _in range(10):
    val = l.read()
    print("Light %d lx"%val)
    time.sleep(1)