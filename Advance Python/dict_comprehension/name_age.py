names=["Alice",'Bob','Charlie']
ages=[25,30,22]

new_dict={x:y for x,y in zip(names,ages)}
print(new_dict)