import Rpi.GPIO as GPIO
import time 

#define mode 
GPIO.setmode(GPIO.BCM);
led = 20

GPIO.setup(led,GPIO.OUT)
time.sleep(1)
GPIO.output(led,GPIO.HIGH)
time.sleep(1)
GPIO.output(led,GPIO.LOW)
time.sleep(1)
GPIO.cleanup()