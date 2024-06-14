from pop import xnode

xnode.atcmd('ID', 0x15)
print(xnode.atcmd('ID'))
for i in xnode.discover():
    print(i)