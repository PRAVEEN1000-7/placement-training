def mutate_string(string, position, character):
    lst=list(string)
    lst[position]=character
    s=''
    for i in range(len(lst)):
        s=s+lst[i]
    return s
