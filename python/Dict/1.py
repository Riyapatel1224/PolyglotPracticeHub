dictEg={1:'a',2:'b',3:'c',4:'d'}
dictEg.update({4:'e'})
print(dictEg)
print(dictEg.get(1))
print(dictEg.items())
print(dictEg.values())
print(dictEg.keys())
# remove,del,clear
dictEg=dictEg.popitem()
print(dictEg)
del dictEg
