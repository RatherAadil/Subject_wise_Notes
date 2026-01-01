numbers=[1,2,3,4,5]
combinations=[(num1,num2) for num1 in numbers for num2 in numbers if num1 != num2]
print(combinations)