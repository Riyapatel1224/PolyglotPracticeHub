"""1. Ask user to give name and marks of 10 different students. Store them in dictionary."""
# a=int(input("how many students info you want to enter: "))
# dict={}
# for i in range(a):
#     name=input("Enter the name of student: ")
#     marks=int(input("Enter the marks of student: "))
#     dict[name]=marks
# dict1=sorted(dict.values())
# print(dict1)
# dict2={}
# for values in dict1:
#     for name,marks in dict.items():
#         if marks==values:
#             print(f"{name}:{values}")


"""3. Make a Python program to count letters of the word: MISSISSIPPI. Your program should store them in a dictionary as: {"M":1, "I":4, "S":4, "P":2}. Next, generalize this program for any word entered by user."""

# '''a=input("enter you name: ")
# dict={}
# for i in a:
#     if i in dict:
#         dict[i]+=1
#     else:
#         dict[i]=1
# for key in dict:
#     print(key,':',dict[key])'''


"""result = {'Science': [88, 89, 62, 95, 50], 'Language': [77, 78, 84, 80, 60], 'Computers': [93, 88, 79, 96, 70]}
Expected Output: 
[{'Science': 88, 'Language': 77}, 
{'Science': 89, 'Language': 78}, 
{'Science': 62, 'Language': 84}, 
{'Science': 95, 'Language': 80}]"""

# result = {'Science': [88, 89, 62, 95, 50], 'Language': [77, 78, 84, 80, 60]}
# sub=[]
# marks=[]
# dict={}
# li=[]
# for key,value in result.items():
#     sub.append(key)
#     marks.append(value)

# for i in sub:
#     for j in marks:
#         print(i)
#         print(j)
#         dict[i]=[i]
#         li.append(dict)
# print(dict)
# print(li)

# subjects = []  
# marks_lists = []
# for subject, marks_list in result.items(): 
#     subjects.append(subject)
#     marks_lists.append(marks_list)
# list_of_dictionaries = []
# for i in range(len(marks_lists[0])): 
#     d1 = {}
#     for j in range(len(subjects)):
#         d1[subjects[j]] = marks_lists[j][i]
#     list_of_dictionaries.append(d1)
# print(list_of_dictionaries)

# for key,value in result.items():
#     for i in value:
#         print(key,i)
    #     r[key]=[i]
    # li.append(r)
# print(result)
# print(sub)
# print(marks)




"""Write a Python script to print a dictionary where the keys are numbers between 1 and 15 (both included) and the values are the square of the keys.
Sample Dictionary
{1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100, 11: 121, 12: 144, 13: 169, 14: 196, 15: 225}"""

# dict={}
# for i in range(1,16):
#     dict[i]=i*i
# print(dict)

"""Write a Python program to combine two dictionary by adding values for common keys.
d1 = {'a': 100, 'b': 200, 'c':300}
d2 = {'a': 300, 'b': 200, 'd':400}
Sample output: Counter({'a': 400, 'b': 400, 'd': 400, 'c': 300})"""

# d1 = {'a': 100, 'b': 200, 'c':300}
# d2 = {'a': 300, 'b': 200, 'd':400}
# dict={}
# for i in d1:
#     if i in d2:
#         dict[i]=d1[i]+d2[i]
#     else:
#         dict[i]=d1[i]

# for i in d2:
#     if i in d1:
#         dict[i]=d1[i]+d2[i]
#     else:
#         dict[i]=d2[i]
# print(dict)

"""Write a Python program to drop empty items from a given dictionary.
Original Dictionary:
{'c1': 'Red', 'c2': 'Green', 'c3': None}
New Dictionary after dropping empty items:
{'c1': 'Red', 'c2': 'Green'}"""

# d1={'c1': 'Red', 'c2': 'Green', 'c3': None}
# d2={}
# for key,value in d1.items():
#     if value==None:
#         continue
#     else:
#         d2[key]=d1[key]
# print(d2)


"""Write a Python program to filter a dictionary based on values.
Original Dictionary:
{'Cierra Vega': 175, 'Alden Cantrell': 180, 'Kierra Gentry': 165, 'Pierre Cox': 190}
Marks greater than 170:
{'Cierra Vega': 175, 'Alden Cantrell': 180, 'Pierre Cox': 190}"""

# d1={'Cierra Vega': 175, 'Alden Cantrell': 180, 'Kierra Gentry': 165, 'Pierre Cox': 190}
# d2={key: value for key, value in d1.items() if value > 170}
# print(d2)


"""A Python Dictionary contains List as a value. Write a Python program to update the list values in the said dictionary.
Original Dictionary:
            +1                      -2                          as it is
{'Math': [88, 89, 90], 'Physics': [92, 94, 89], 'Chemistry': [90, 87, 93]}
Update the list values of the said dictionary:
{'Math': [89, 90, 91], 'Physics': [90, 92, 87], 'Chemistry': [90, 87, 93]}"""

# d1 = {"Math": [88, 89, 90], "Physics": [92, 94, 89], "Chemistry": [90, 87, 93]}
# print(d1)
# for key,value in d1.items():

#     if key=='Math':
#         for i in range(len(value)):
#             value[i]+=1
#     elif key=='Physics':
#         for i in range(len(value)):
#             value[i]-=2
#     else:
#         continue
# print(d1)

# for key, value in d1.items():
#     for i in value:
#         print(i)
# print(d1)
# print()
