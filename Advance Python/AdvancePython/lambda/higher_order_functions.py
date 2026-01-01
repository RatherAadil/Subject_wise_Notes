def higherOrder(func,nums):
    result =[]
    for num in nums:
        result.append(func(num))
    return result

numbers =[1,2,3,4,5]

squares= lambda x:x*x

# def squares(x):
#     return x*x

squared_numbers = higherOrder(squares,numbers)
# print(squared_numbers)




# students = [
# {"name": "Alice", "grade": 85},
# {"name": "Bob", "grade": 92},
# {"name": "Charlie", "grade": 78}
# ]
# sorted_students = sorted(students, key=lambda student: student["grade"])
# print(sorted_students)
