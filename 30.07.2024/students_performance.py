from numpy import*

student_performance = array([
    [70, 80, 90, 85,85],  
    [60, 75, 80, 70,98],  
    [85, 90, 95, 92,94],   
    [50, 65, 70, 60,65],  
    [98, 85, 80, 87,90]   
])


lst=['tamil','english','maths','science','social']

x=int(input("Enter the student number(0-4) :")) 

print("\nsubject :\ntamil   -0\nenglish -1\nmaths   -2\nscience -3\nsocial  -4\n")

y=int(input("Enter the start subject number : "))
z=int(input("Enter the end subject number : "))

perf=student_performance[x,y:z+1]
l=lst[y:z+1]
print(f"the performance of student {x} for the subjects  :\n")
for i in range(len(perf)):
    print(f"{l[i]} : {perf[i]}\n")


certain_criteria=student_performance[(student_performance>80).all(axis=1)]
print("\nStudents meeting criteria (score above 80 in all subjects):")
r,c=where(student_performance==certain_criteria)
print(f"student {r[0]}")
