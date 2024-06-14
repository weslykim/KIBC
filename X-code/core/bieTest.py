from pop import ble

ble.activate(True)

print("address : ", ble.config('mac'))

payload = bytearray()
payload.append(len("Hello") + 1)
payload.append(0x08)
payload.extend("Hello")

ble.gap_advertise(100000, payload)