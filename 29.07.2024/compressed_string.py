def compress(x):
    
    c=1
    string=""
    for i in range(len(x)):
        if i==len(x)-1  or x[i]!=x[i+1] :
            
            string = string + x[i] + str(c)
            c=1
        else:
            c+=1

    return string

x=input("Enter the sentence :")
print(f"from {x} to compressed format : {compress(x)}")
  
