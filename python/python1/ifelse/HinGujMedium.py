# --MEDIUM : ?  ENG/GUJ/HIN
# --ENGLISH : ?
# --PERCENT : ?
# --ENG : MINIMUM SCORE IN ENGLISH : 60 + MINIMUM PERCENT : 75
# --GUJ/HIN : MINIMUM SCORE IN ENGLISH : 70 + MINIMUM PERCENT : 80
# --DISPLAY ELIGIBLE OR NOT ELIGIBLE FOR ADMISSION.

medium=input("Enter the medium you are in (HIN/GUJ/ENG): ")
eng=int(input("Enter the percentage you got in english subject: "))
per=int(input("Enter the total percentage you got : "))
if medium=='ENG' and eng>=60 and per>=75:
    print("YOU ARE ELIGIBLE")
elif (medium=='GUJ' or medium=='HIN') and eng>=70 and per>=80:
    print("YOU ARE ELIGIBLE")
else:
    print("YOU ARE NOT ELIGIBLE")


