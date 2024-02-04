# Example 1: Print the first 10 natural numbers using for Loop.

# i=1
# for i in range(11):
#     if i>0:
#         print(i)

# Example 2: Python program to print all the even numbers within the given range.

# a=int(input("Enter a number: "))
# for i in range(a+1):
#     if i%2==0:
#         print(i)
#     else:
#         continue

# Example 3: Python program to calculate the sum of all numbers from 1 to a given number.

# sum=0
# num=int(input("Enter the number: "))
# for i in range(num+1):
#     sum=sum+i
# print(sum)    

# Example 4: Python program to calculate the sum of all the odd numbers within the given range.

# sum=0
# num=int(input("Enter the number: "))
# for i in range(num+1):
#     if i%2==1:
#         sum=sum+i
# print(sum) 

# Example 5: Python program to print a multiplication table of a given number


# num=int(input("Enter the number: "))
# for i in range(1,11):
#     mul=num*i
#     print(f"{num} * {i} = {mul} ")


# Example 6: Python program to count the total number of digits in a number.

# num=input("enter a numebr: ")
# print(len(num))


# Example 7: Python program that accepts a word from the user and reverses it.

# a=input("Enter your name: ")
# a1="".join(list(reversed(a)))
# print(str(a1))
# rev=a[::-1]
# print(rev)
# a2=""
# for i in a:
#     a2=i+a2
# print(a2)

# Example 8: Python program to count the number of even and odd numbers from a series of numbers.

# num=input("Enter a num:  ")
# odd,even=0,0
# for i in num:
#     if int(i)%2==0:
#         even+=1
#     else:
#         odd+=1
# print(f"odd:{odd}")
# print(f"even:{even}")

# Example 9: Python program to find the factorial of a given number.

# num=int(input("enter a number: "))
# fact=1
# for i in range(1,num+1):
#     fact=fact*i
# print(fact)