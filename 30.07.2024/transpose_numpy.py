from numpy import *


def Transpose_matrix(org):
    row,col=org.shape
    
    trans=zeros((row,col),dtype=org.dtype)    
    
    for i in range(row):
        for j in range(col):
            trans[i][j]=org[j][i]
    
    return trans        


x=int(input("enter the row :"))
y=int(input("enter the column :"))

lst=[]
for i in range(x):
    row_value=[]
    for j in range(y):
        row=int(input(f"enter the matrix value ({i},{j}) : "))
        row_value.append(row)
    lst.append(row_value)

org_matrix=array(lst)

# function call 

print(f" the given matrix :\n{org_matrix}\n")
print(f"the transpose the given matrix :\n {Transpose_matrix(org_matrix)}")
