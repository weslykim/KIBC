from pop import IMU
from pop import time

imu = IMU()

while True:
    # sys, gyro, accel, mag = imu.calibration()
    # print("SGAM : %d %d %d %d"% (sys, gyro, accel, mag))
    # time.sleep(1)
    
    acc = imu.accel()
    lin = imu.lineraccel()
    gra = imu.gravity()
    
    print("%.2f %.2f %.2f"%(acc), end = '')
    print("%.2f %.2f %.2f"%(lin), end = '')
    print("%.2f %.2f %.2f"%(gra))
    time.sleep(0.1)