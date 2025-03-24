# String and number value can operate together with (*)

a,b=1,2
txt = "@"
print(2*txt*3)

# String and String can operate with (+)

a,b = "1",4
txt = "@"

print((a+txt)*b)

# numeric values can operate with all arithmetic operators 

a,b=1,2
c=3
print(a+b*c)

#arithmetic expressions with integer and float 

a,b=10,50.0
print(a+b)

# result of division operator with two integer will be float 

a,b=1,2
print(a/b)

# integer division with float and int will give int displayed as nfloat 

a,b=1.5,3
c=a//b
print(c,a/b)

# result of a//b is same as floor(a/b)

# remainder is negative if denominator is negative 

a,b=5,-2
print(a%b)