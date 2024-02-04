# Write a Python code that asks a string from user and replace the first occurance of " " with "_" and last occurance of " " with "#".'''
# '''input string: Keep yourself mute while not speaking.
# output: Keep_yourself mute while not#speaking.

s="keep pin drop silence"
s=s.replace(" ","_",1)
s=s[::-1].replace(" ","#",1)[::-1]
print(s)

