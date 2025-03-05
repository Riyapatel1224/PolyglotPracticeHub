data = [10,20,123,130,1]

for i in data:
    if i > i+1:
        min = i
    elif i+1 < i:
        max = i+1 

print(min)
print(max)
