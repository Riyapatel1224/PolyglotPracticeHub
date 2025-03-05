li=[1,2,3,4,5,6,7,8,9,0]
c=0
a=int(input("Enter a number: "))
for i in range(len(li)):
    if(a==li[i]):
        c+=1
if c>=1:
    print("Yes")
else:
    print("No")
        