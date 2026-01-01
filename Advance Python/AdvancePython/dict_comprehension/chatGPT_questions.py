#key as number square as its value
numbers=[1,2,3,4,5]
sq={key:key**2 for key in numbers}
# print(sq)

#list of tuples into dictionary
tup_list=[(1,'a'),(2,'b'),(4,'c')]

dict = {key:value for key,value in tup_list}
# print(dict)

#keys from list1 and values from list2
nums=[1,2,3]
str=['a','b','c']

new_dict={key:value for key,value  in zip(nums,str)}
# print(new_dict)

#filter dict with values >50
dict={'a':100,'b':75,'c':50,'d':40}
greater= {keys:values for keys,values in dict.items() if values <= 50}
# print(greater)

#dict vowels as keys and count as values
# strr= 'this is a string which i am going to use for dict'
# vowels = 'aeiou'
# valcount={vowel:vowels.count(vowel) for vowel in strr if vowel in vowels}
# print(valcount)