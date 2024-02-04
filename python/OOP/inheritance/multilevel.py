# class Parent():
#     def __init__(self,name):
#         def display("Parent init - ",name)
#     def parentIN():
#         def display("ParentIN - ",name)

# class ChildClass1(Parent):
#     def __init__(self,name):
#         def display("ChildClass1 init - ",name)
#     def cc1IN():
#         def display("CC1 - ",name)
# class ChildClass2(ChildClass1):
#     def __init__(self,name):
#         ...
#     def cc2IN():
#         ...

# name = input("Enter your name : ")
# a=ChildClass2(name)
# print(a.display(name))



# holiday parent ,plan child(date>todays date)if else(posiible or not ), method planner ,  init user date place and way 


class holiday():
    def __init__(self,date,plan,way):
        # plan.self(self,date,place,way)
        self.date=date
        self.place=place
        self.way=way
class plan(holiday):
    # def __init__(self,date,place,way):
        
    def decision():
        if(date<12):
            print("Not Possible")
        else:
            print("POSSIBLE")
            
date=int(input("Enter the date: "))
place=input("Enter the destination you want to visit: ")
way=input("Road Vehical : ")
decision=plan(date,place,way)
plan.decision()