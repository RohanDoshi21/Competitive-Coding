for _ in range(int(input())):
    n = int(input())
    k = int(input())
    s = input()
    while k > 0:
        s = s[:k:-1] + s[k:]
        print(s)
        k -= 1
    print(s)