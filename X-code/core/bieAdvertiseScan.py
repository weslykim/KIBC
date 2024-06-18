from pop import ble

ble.active(True)

scan = ble.gap_scan(duration_ms = 5000)

print("start scan")
for i in scan:
    print(i)
print("finish")