l=['abc', 'xyz', 'aba', '1221']
count=0
c=0
for i in l:
    if len(l)>2:
        count+=1
    else:
        continue

    if i[0]==i[-1]:
        c+=1
    else:
        continue
print(count)
print(c)
