# Write a program in C to calculate and print the electricity bill of a given customer. 
#    The customer ID, name, and unit consumed by the user should be captured from the keyboard to 
#    display the total amount to be paid to the customer.The charge are as follow :

# Unit					                Charge/unit
# upto 199				                @1.20
# 200 and above but less than 400		@1.50
# 400 and above but less than 600		@1.80
# 600 and above				            @2.00
# If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should b
# rs 100

id=int(input("Enter your Id: "))
name=input("Enter your name: ")
unit=int(input("Enter unit consumed by you: "))
sum=0
if unit<=199:
    sum=unit*1.20
    print(f"Your charges are: {sum}")
elif unit>=200 and unit<400:
    sum=unit*1.50
    print(f"Your charges are: {sum}")
elif unit>=400 and unit<600:
    sum=(unit*1.80)+((15/100)*unit)
    print(f"Your charges are: {sum}")
elif unit>=600:
    sum=(unit*2.00)+((15/100)*unit)
    print(f"Your charges are: {sum}")
else:
    print("Enter a valid value.TRY AGAIN")
