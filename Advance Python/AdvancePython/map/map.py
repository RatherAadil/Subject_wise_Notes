#square of elements of a number
numbers = [1,2,3,4]
sq = map(lambda x:x*x,numbers)
print(list(sq))


#change elements of a list from string to int
string_list=['1','2','4','5']
intlist= map(lambda x:int(x),string_list)
print(list(intlist))


#change from smallcase to uppercase
data = ["apple",'banana','orange']
change = map(lambda x:x.upper(),data)
print(list(change))