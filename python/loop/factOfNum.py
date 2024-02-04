num=int(input("Enter a num: "))
fact=1
i=1
# for i in range(1,num+1):
#     fact=fact*i

# print("Factorial of",num," is ",fact)

while i<num+1:
    fact=fact*i
    i+=1

print("Factorial of", num, " is ", fact)
