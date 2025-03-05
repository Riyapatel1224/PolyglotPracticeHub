# --MEDIUM: ?  ENG/GUJ/HIN
# --ENGLISH: ?
# --PERCENT: ?
# --ENG: MINIMUM SCORE IN ENGLISH: 60 + MINIMUM PERCENT: 75
# --GUJ/HIN: MINIMUM SCORE IN ENGLISH: 70 + MINIMUM PERCENT: 80
# --DISPLAY ELIGIBLE OR NOT ELIGIBLE FOR ADMISSION.

medium=input("Enter you medium GUJ or HIN or ENG: ")
eng=int(input("enter you marks in english subject: "))
per=int(input("Enter the percentage you got: "))
if(medium=="ENG"):
    if(eng>=60 and per>=75):
        print("YOU ARE ELIGIBLE FOR ENGLISH MEDIUM")

    else:
        print("SORRY HE/SHE IS NOT ELIGIBLE FOR ENGLISH MEDIUM")

elif(medium=="GUJ" or "HIN"):
    if (eng >= 70 and per >= 80):
        print("YOU ARE ELIGIBLE FOR ENGLISH MEDIUM")

    else:
        print("SORRY HE/SHE IS NOT ELIGIBLE FOR ENGLISH MEDIUM")
