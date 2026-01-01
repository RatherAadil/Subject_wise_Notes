class Even:
    def __init__(self,max):
        self.max=max
        self.n = 2
   
    def __iter__(self):
        return self.n


    def __next__(self):
        if self.n <=self.max:
            result = self.n
            self.n += 2
            return result

        else:
            raise StopIteration
        
numbers = Even(10)

print(next(numbers))
print(next(numbers))
print(next(numbers))
