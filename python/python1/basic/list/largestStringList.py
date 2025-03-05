data = ["abc","xyzas","asdfdewe","a"]
max = []

for i in range (0,len(data)):
    if len(data[i]) > len(data[i+1]):
        data.pop(i)
    else:
        continue

print()