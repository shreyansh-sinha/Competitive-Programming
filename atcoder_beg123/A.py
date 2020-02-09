arr = []

for i in range(5):
    x = int(input())
    arr.insert(i, x)

k = int(input())
flag = 0
for i in range(5):
    for j in range(5):
        if abs(arr[i]-arr[j]) > k:
            flag = 1
            break

if flag == 1:
    print(':(')
else:
    print('Yay!')
