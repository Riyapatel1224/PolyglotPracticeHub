# d={1:0,2:1,3:2}
# d.update({"k":4},k=3)
# print(d)


'''2. Write a Python script to concatenate the following dictionaries to create a new one.

Sample Dictionary :
dic1={1:10, 2:20}
dic2={3:30, 4:40}
dic3={5:50,6:60}
Expected Result : {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}'''

# dic1={1:10, 2:20}
# dic2={3:30, 4:40}
# dic3={5:50, 6:60}
# dic4={}
# for i in (dic1,dic2,dic3): dic4.update(i)
# print(dic4)


# dic1={1:10, 2:20, 3:30}
# num=int(input())

# if num not in dic1.keys():
#     print("Unique")
# else:
#     print("Already Available")


# dic1={1:10, 2:20, 3:30, 4:40}
# for keys,values in dic1.items():
#     print(f"key:{keys}")
#     print(f"value:{values}")


# n=int(input())
# dic={}
# for i in range(1,n+1): dic[i]=i**2
# print(dic)


# dic={}
# for i in range(1,16): dic[i]=i**2
# print(dic)

'''7. Write a Python program to create a flat list of all the values in a flat dictionary.
Sample Output:
Original dictionary elements:
{'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
Create a flat list of all the values of the said flat dictionary:
values=[19, 20, 21, 20]
keys=["",""]'''


# dic={'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
# key=[]
# value=[]
# for keys,values in dic.items():key.append(keys),value.append(values)
# print(f"keys:{key}")
# print(f"values:{value}")

# k=['a','b','c','d']
# v=[1,2,3,4,5]
# print(dict(list(zip(k,v))))

# def test(dic,n):
#     return list(key for key,value in dic.items() if value==n)

# n=int(input())
# dic={'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
# print(test(dic,n))

# n1=[]
# for keys,values in dic.items(): 
#     if values == n: n1.append(keys)
# print(n1)

# def test(n):
#     dic={}
#     for i in n:
#         dic[i]=dic.get(i,0)+1
#     print(dic)
# n=input()
# test(n)

# def test(dic):
#     print(list(zip(dic.values(),dic.keys())))
# dic={'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
# test(dic)


