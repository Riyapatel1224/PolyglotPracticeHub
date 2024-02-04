li=[1,2,3,4,4,5,6,6,4,4,4,4]
li2=[]
for i in li:
    if(i not in li2):
        li2.append(i)
print(li)
print(li2)