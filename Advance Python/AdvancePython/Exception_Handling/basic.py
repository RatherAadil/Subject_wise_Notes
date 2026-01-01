# first_number =int(input("Enter the first number"))
# second_number =int(input("Enter the second number"))

try:
        x= int(input("Enter any number : "))
        y= 1/x
        print(y)

except ZeroDivisionError:
    print("You cannot divide the number by zero")

except ValueError:
    print("Enter the valid number")

print("The End")