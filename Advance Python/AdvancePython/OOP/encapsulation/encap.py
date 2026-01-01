class Finance:
    def __init__(self):
        self.__revenue = 10000
        
    def display(self):
        print(f"Revenue if {self.__revenue}")
f1 = Finance()
#print(f1.__revenue)
f1.display()


class Employee:
    def __init__(self):
        print("Employee constructor called")
        #self.rev = f1.revenue = 10

obj = Employee()
#print(obj.rev)