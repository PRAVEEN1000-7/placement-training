def d(a,n):
    return [n(x) for x in a]

def b(a):
    return a*2

def c(a):
    return a**2

a=[1,2,3,4]
print(d(a,b))
print(d(a,c))
