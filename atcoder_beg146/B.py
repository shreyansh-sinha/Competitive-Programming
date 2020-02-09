n = int(input())
s = str(input())

out = []
for i in range(len(s)): 
    if ord(s[i])+n <= 90:
        out.insert(i, chr(ord(s[i])+n))
    else:
        out.insert(i, chr(ord(s[i])-26+n))

for i in range(len(s)):
    print(out[i], end = '')
