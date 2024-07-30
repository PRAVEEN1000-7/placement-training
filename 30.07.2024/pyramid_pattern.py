def pyramid(x):
    
    for i in range(1,x+1):
        for j in range(0,x-i+1):
            print(" ",end="")
        y=1
        for j in range(1,i+1):
            print(" *",sep="",end="")

        print()

x=int(input("Enter the number :"))
pyramid(x)
