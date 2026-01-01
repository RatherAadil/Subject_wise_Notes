class Method_overloading:
    def sum (self,a =None,b=None,c=None):
        if a!= None and b != None and c!= None:
            result = a+b+c

        elif a!= None and b!= None:
            result = a+b

        else:
            result =a 
        return result
        
obj = Method_overloading()
print(obj.sum(1))
