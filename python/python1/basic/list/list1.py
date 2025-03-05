data = [1,2,2,3,3,4]
duplicate = []

for i in data:
    if i not in duplicate:
        duplicate.append(i)
        
# print(data)
print(duplicate)