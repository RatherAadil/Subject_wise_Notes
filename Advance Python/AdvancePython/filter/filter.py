numbers = range(1,20)
fileted = filter(lambda x:x%2 == 0,numbers)
print(list(fileted))



#Filtering long strings from a list
words = ['hello','world','how','are','you']
long_words = filter(lambda x : len(x)>4,words)
print(list(long_words))


# nums = [1,2,4,5,6,6,6]
# unique = filter(lambda x :x,nums)
# print(set(unique))
