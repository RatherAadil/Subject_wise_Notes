# Write a Python program that asks the user to input two numbers and divides the first number by the second number. Handle the ZeroDivisionError exception and print a message if the second number is 0
 

# n =  int(input("Enter first number"))
# m =  int(input("Enter second number"))

# try:
#     div = n/m
#     print(div)
# except ZeroDivisionError:
#     print("You cannot divide by zero")


# Create a function that takes a list of numbers as input and returns the sum of all the numbers. Handle the TypeError exception if any of the elements in the list is not a number.

# def sum(x):
#     try: 
#         add = 0      
#         for i in x:
#             add += i
#         return add

#     except TypeError:
#         print("string found")

# list =[1,2,3,4,5,6,'a']
# result = sum(list)
# print(result)



#Write a Python program that opens a file (you can choose any file) and reads its contents. Handle the FileNotFoundError exception and print a message if the file does not exist.

# try:
#     f = open("hello.txt", 'r')
#     contents = f.read()
#     print(contents)
#     f.close()
# except FileNotFoundError:
#     print("File not found")



#Create a function that takes a string as input and converts it to an integer. Handle the ValueError exception if the input string cannot be converted to an integer


try:
    def typecasting(x):
        res = int(x)
        return res
    
    output= typecasting('a')
    print(output)
except ValueError:
    print('cannot change the string into int')