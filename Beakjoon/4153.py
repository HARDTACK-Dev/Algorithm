a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)


while not (a == 0 and b == 0 and c == 0 ):
    if c*c == a*a + b*b:
        print("right")
    else:
        print("wrong")
    a, b, c = map(int, input().split())
