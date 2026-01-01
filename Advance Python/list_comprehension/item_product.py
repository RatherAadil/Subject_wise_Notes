item1=[1,2,3,4,5]
item2=[4,5,6,7,8]

product = [i*j for i,j in zip(item1,item2)]
print(product)

#Expected answer = [4, 10, 18, 28, 40]