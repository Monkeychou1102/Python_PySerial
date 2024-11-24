import serial

#---------------------------------------------------------------------
mySerial = serial.Serial(
    port = 'com3',
    baudrate = 9600,
    bytesize = serial.EIGHTBITS,
    parity = serial.PARITY_NONE,
    stopbits = serial.STOPBITS_ONE
    )

#---------------------------------------------------------------------
while 1:
 string = mySerial.readline().decode().strip()
 print(string)
