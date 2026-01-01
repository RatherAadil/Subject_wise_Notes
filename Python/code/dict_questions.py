data = {"a": 10, "b": 20, "c": 30} # Output: 60
result=0
for value in data.values():
    result+=value

# print(result)

letters={"a": 1, "b": 2, "c": 3}
del letters['b']
# print(letters)

d = {"a": 1, "b": 2, "c": 3}
reversed_dict = {value: key for key, value in d.items()}
# print(reversed_dict)

student = {
    "name": "Aadil",
    "marks": {"math": 85, "science": 90}
}

# for value in student['marks'].values():
        # print(value)


keys = ['a', 'b', 'c']
values = [1, 2, 3]

new_dict = {key:value for key,value in zip(keys,values)}
# print(new_dict)

