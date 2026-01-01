#square of unique even nummbers

numbers =[1,3,4,5,6,33,44,55,66,44,55,66]
unique_numbers={i for i in numbers if i%2==0}
print(unique_numbers)