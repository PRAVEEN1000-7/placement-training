r = int(input())
for i in range(r):
    try:
        x, y = map(int, input().split())
        print(x//y)
    except Exception as e:
        print("Error Code:",e)
