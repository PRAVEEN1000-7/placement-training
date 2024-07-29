x=int(input("Enter the start : "))
y=int(input("Enter the end : "))

def arm(n):
    s=str(n)
    l=len(s)
    
    armstrong=sum(int(i)**l for i in s)
    return armstrong == n

for i in range(x,y+1):
    if arm(i):
        print(i)
