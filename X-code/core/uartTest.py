from pop import Uart

uart = Uart()
uart.write("Start UART\n")

for _ in range(15):
    data = uart.read(1)
    uart.write(data)
    uart.write("\n")