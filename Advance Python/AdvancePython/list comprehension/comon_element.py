#Find the common elements between two lists using list comprehension.

list1=[1,2,3,44,5]
list2=[3,9,8,44]

#METHOD 1

# for x in list1:
#     for y in list2:

#         if x==y:
#             print(f"{x} is equal to {y}")

#METHOD 2

# commonElement=[(x,y) for x in list1 for y in list2 if x==y ]
# print(commonElement)


#METHOD 3


commonElement = [x for x in list1 if x in list2]
print(f"Common elements between two list are : {commonElement}")