def fibo():
    a,b=0,1
    while True:
        yield a
        a,b=b,a+b
    
f=fibo()
x=int(input("Enter : "))

for i in range(x):
    print(next(f),end=" ")

print()
print("continuing")

for i in range(x):
    print(next(f),end=" ")
