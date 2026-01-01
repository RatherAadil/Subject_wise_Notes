user={
    'name':'Zubair',
    'age':23,
    'subject':'CS'
}
# update or insertion
user['semester']=6

# delete
# del user['age']
# user.pop('semester')

# access
# print(user.get('semester',"key doesn't exist"))
# print(user.keys())
# for key,value in user.items():
    # print(key,value)


user2={
    'age2':20,
    'subject2':'BCA'
}

user.update(user2)
# print(user)

words=" the quick brown fox jumps over the lazy dog"
word_count={}
for word in words:
    if word not in word_count:
        word_count[word]=1
    else:
        word_count[word] +=1

# print(word_count)


u={
    1:33
}
u[1]=44
u[2]=55

for index,value in enumerate(u):
    print(f"{index}:{value}")