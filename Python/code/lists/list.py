# input_str = "Python" # Expected output: ['n', 't', 'd', 'p']
# filtered=[str(char) for char in input_str ]
# print(filtered)

# items=[(x,x**2) for x in range(1,11)]
# print(items)

# words = ["the", "sun", "shines", "bright", "on", "earth"]
# length_more_than_three=[word for word in words if len(word)>3]
# print(length_more_than_three)

# dev_by_3_5=[ x for x in range(1,101) if x%3==0 and x%5==0]
# print(dev_by_3_5)

# words = ["the", "sun", "shines", "bright", "on", "earth"]
# lengths=[len(x) for x in words ]
# print(lengths)

# numbers = [5, -1, 0, -3, 7] # Expected: [5, 0, 0, 0, 7]
# replaced = [x if x>=0 else 0 for x in numbers ]
# print(replaced)


# students={'Alice':90,'Bob':80,'Charlie':50}
# my_dict = dict(name="Alice", age=20, city="New York")
# print(my_dict)

# nums=list(range(5))
# r=nums.pop()
# print(r)
# print(5 in nums)
# del nums
# print(nums)


l = (1,2,3,[1,2],{'name':'alice'})
ls=l.sort()
print(ls)