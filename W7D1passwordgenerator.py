from random import random
import math

caratteri = "abcdefghilmnopqrstuvwxyz1234567890"

password = ""

passwordAscii= ""

for i in range(0,8):
    num = math.ceil(random()*33)
    password += caratteri[num]
    
for i in range(0,8):
    num = math.ceil(random()*127)
    passwordAscii += chr(num)



print("Password con caratteri alfanumerici è \n" , password)

print("Password con caratteri Ascii è \n",passwordAscii)