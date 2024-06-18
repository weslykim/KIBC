from pop import xnode

xnode.atcmd('NI', 'Coordinator')
xnode.atcmd('CE', 0x01)
xnode.atcmd('ID', 0x15)
xnode.atcmd('WR')
