x=int(input())
for i in range(x):
    for j in range(i):
        print(" *",end=' ')
    print()
    
while True:
    for i in range(x):
        print(" *",end=' ')
    print()
    x=x-1
    if x<=0:
        break

for i in range(x+10):
    for j in range(i):
        print()

