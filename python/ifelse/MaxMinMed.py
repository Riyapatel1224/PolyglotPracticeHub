no1 = int(input("Enter a num: "))
no2 = int(input("Enter a num: "))
no3 = int(input("Enter a num: "))

if (no1 > no2 and no1 > no3):
    print(no1, " is maximum")
    if (no1 < no2 and no1 < no3):
        print(no1, " is minimum")
    else:
        print(no1," is medium")

elif (no2 > no1 and no2 > no3):
    print(no2, " is maximum")
    if(no2<no1 and no2<no3):
        print(no2," is minimum")
    else:
        print(no2," is medium")

elif(no3>no1 and no3>no2):
    print(no3," is maximum")
    if(no3<no1 and no3<no2):
        print(no3," is minimum")
    else:
        print(no3," is medium")


# if num1 >= num2 and num1 >= num3:
#     largest = num1
#     if num2 >= num3:
#         medium = num2
#         smallest = num3
#     else:
#         medium = num3
#         smallest = num2