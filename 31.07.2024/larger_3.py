a=int(input())
b=int(input())
c=int(input())

if a>b and a>c:
    print(a,"Greater than ",b," and ",c)
elif b>a and b>c:
    print(b,"Greater than ",a," and ",c)
elif c>a and c>b:
    print(c,"Greater than ",a," and ",b)
elif a==b and a>c:
    print(a,"and",b,"Greater than ",c)
elif b==c and b>a:
    print(b,"and",c,"Greater than ",a)
elif c==a and c>y:
    print(a,"and",c,"Greater than ",b)
else:
    print("All numbers are equal")
