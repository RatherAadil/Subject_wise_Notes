import additon as a
import subtraction as s

def calculator(x,y):
    add = a.addition(x,y)
    sub = s.subtract(x,y)
    return add,sub

added ,subbed = calculator(3,4)
print("Addition of two numbers is :", added)
print("subtraction of two numbers is :" ,subbed)





# print(a.addition(3,3))
# print(s.subtract(5,3))
