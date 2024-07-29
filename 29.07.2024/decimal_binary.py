def binary(x):
    y=""
    while x>0:
        y=str(x%2)+y
        x//=2
    return y if y else "0"

def decimal(x):
    y=0
    pow=len(x)-1
    for i in x:
        y+=int(i)*(2**pow)
        pow-=1
    return y

x=int(input("Enter the number  :"))

b=binary(x)
print(f"binary : {b}")
print(f"decimal : {decimal(b)}")
