f=open("random_number.txt","a")
n=input("Enter the data to append (separated by comma(,) :\n")
f.write(n)
f.close()
f=open("random_number.txt","r")
print("the updated random numbers in the file :")
print(f.read())
f.close()

