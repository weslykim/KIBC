from pop import xnode
msg = "Hello"

print("Sending msg")
xnode.transmit(xnode.ADDR_BROADCAST, msg)
print("complete")