def squares ():

    for num in range(1,11):
        yield num**2

for sq in squares():
    print(sq)

    ###################



#iterators

# ls = [1,2,3,4,5,5,6]
# iterator = iter(ls)
# print(next(iterator))
# print(next(iterator))
# print(next(iterator))