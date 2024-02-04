'''def FL():
    fname=input("Enter first name: ")
    lname=input("ENter last name : ")
    return fname,lname
def M():
    mname=input("Enter middle name: ")
    return mname


first,last=FL()
middle=M()
print((f"{first} {middle} {last}"))'''


'''def max(num1,num2,num3):
    if num1>num2 and num1>num3:
        return num1
    elif num2>num1 and num2>num3:
        return num2
    elif num3>num1 and num3>num2:
        return num3
    else:
        return num1
        

num1=int(input())
num2=int(input())
num3=int(input())
m=max(num1,num2,num3)
print(f"max number is {m}")'''


'''def sum(li):
    sum=0
    for i in li:
        sum=i+sum
    return sum

s=sum(li=[1,2,-3,4,5,-6])
print(s)'''


'''def UpperLower(strig):
    
    upper,lower=0,0
    for i in strig:
        if i.isupper():
            upper+=1
        elif i.islower():
            lower+=1
        else:
            continue
    return upper,lower
name_str='My N@me is Riy@'
name_str=name_str.replace(" ","")
print(name_str)
u,l=UpperLower(name_str)
print(f"upper={u} lower={l}")'''



'''def unique(li):
    li2=[]
    for i in li:
        if i not in li2:
            li2.append(i)
    return li2
li=[1,1,2,3,4,3,5]
l=unique(li)
print(l)'''


'''def sqr():
    li=[]
    for i in range(1,31):
        sq=i*i
        if sq <= 30:
            # print(sqrt(i))
            li.append(i)
        else:
            continue
    return li
s=sqr()
print(s)'''


def perfect(num):
    sum=0
    for i in range(1,num):
        if num%i==0:
            sum=sum+i  
    if sum==num:
        return True
    
num=int(input())
i=perfect(num)
if i==1:
    print("PERFECT NUMBER")
else:
    print("NOT PERFECT NUMBER")
