import numpy as np
import random
a=[]
for i in range(0,10):
    a.append(random.randint(0,100))
a=np.array(a)
print("the original array :",a)
while True:
    print("1.add\n2.remove\n3.Exit")
    x=int(input("Enter a number : \n"))
    if x==3:
        break
    elif x==1:
        z=int(input("Enter a number to add :\n"))
        b=np.append(a,z)
        print(b)
    elif x==2:
        z=int(input("Enter a number index to remove :\n"))
        b=np.delete(a,0)
        print(b)

