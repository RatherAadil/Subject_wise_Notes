class Parent:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def speak(self):
        print("Shhhh, Parent is speaking")


class Child(Parent):
    def __init__(self,name,age,salery):
        super().__init__(name,age)
        super().speak()
        self.salery = salery
       
    
    def show(self):
        print(f"Hello my name is {self.name} and i am {self.age} years old and my salery is {self.salery}")
        self.speak()

c=Child('AAdil',121,22000)
c.show()
