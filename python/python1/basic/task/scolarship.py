marks = float(input("Enter your marks: "))
income = float(input("Enter your family income: "))

if marks >= 90:
    if income < 500000:
        print("You are eligible for a Full Scholarship with 100% coverage.")
    else:
        print("You are eligible for a Full Scholarship with 75% coverage.")

elif 80 <= marks <= 89:
        if income < 500000:
            print("You are eligible for a Partial Scholarship with 50% coverage.") 
        else:
            print("You are eligible for a Basic Scholarship with 25% coverage.")
elif 70 <= marks <= 79:
    if income < 500000:
        print( "You are eligible for a Basic Scholarship with 25% coverage.")
    else:
        print( "You are eligible for a Basic Scholarship with 10% coverage.")
else:
    print( "You are not eligible for a scholarship.")