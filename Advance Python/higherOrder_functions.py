def higher_order(func,num):
    result =[]
    for i in num:
        result.append(func(i))

    return result
    

def sqrt(x):
    return x*x
numbers = [2,3,4,5,6]

squares = higher_order(sqrt,numbers)
print(squares)