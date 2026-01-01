class Stack:
    def __init__(self):
        self.stack_lsit=[]

    def push(self,val):
        #This will push the element at the last index
        self.stack_lsit.append(val)

    def pop(self):
        #This will remove the Last item
        val= self.stack_lsit[-1]
        del self.stack_lsit[-1]
        return val
    
st_obj= Stack()
st_obj.push(1)
st_obj.push(2)
st_obj.push(3)

print(st_obj.pop())
print(st_obj.pop())
print(st_obj.pop())





