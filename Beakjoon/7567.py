jupsi = input()
sum = 0


for i in jupsi:
    if i in['('] and [')']:
        sum = sum+10;
    if i in['(']:
        if i in['(']:
            sum = sum+5;

    

print(sum)
