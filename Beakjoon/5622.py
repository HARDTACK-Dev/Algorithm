dial = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
a = input();
time = 0
for j in range(len(a)):
    for i in dial:
        time = time + dial.index(i)+3
