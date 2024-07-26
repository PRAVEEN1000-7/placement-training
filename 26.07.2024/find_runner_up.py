if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    x=max(arr)
    while x in arr:
        arr.remove(x)
    y=max(arr)
    print(y)
