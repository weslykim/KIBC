from pop import Battery, time, ADC

adc = ADC("D2")

for _ in range(5):
    raw = adc.read()
    conv = round(raw * 3.3 / 4095, 1)
    battery = conv * 1.6
    print("raw = %d"%raw)
    print("conv = %.2d"%conv)
    print("battery = %.2f"%battery)   