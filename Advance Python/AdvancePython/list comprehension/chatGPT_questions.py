number =[i**2 for i in range(1,11)]
# print(number)

#even numbers
numbers = [1,2,3,4,5,6,7,7,8,9,10,11,12,13,14,15,16]
even_numebrs =[i for i in numbers if i % 2==0]
# print(even_numebrs)


#string list to uppercase

strs=['hello','how','are','you']
upper =[i.upper() for i in strs ]
# print(upper)

#two lists to tuple
l1=[1,2,3,4,5]
l2=[5,6,7,8,9]

tup =[(i,j) for i in l1 for j in l2]
# print(tup)


#length of word in a sentence

sentence = "This is a sample sentence"
word_lengths = [len(word) for word in sentence.split()]
# print(word_lengths)


#vowels from a string
string = 'this is a string for comprehension'
vowels =[i for i in string if i in "AEIOUaeiou"]
# print(vowels)


#combinations of two lists
list1 =[1,2,3]
list2=['a','b','c']

combinations = [(i,j) for i in list1 for j in list2 ]
print(combinations)