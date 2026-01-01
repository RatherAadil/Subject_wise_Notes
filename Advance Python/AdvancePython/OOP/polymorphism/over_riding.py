class Parent:
    def __init__(self,vehicle):
        self.vehicle = vehicle

    def display(self):
        print(f"parent has : {self.vehicle}")


class Child(Parent):
    def display(self):
        print(f"Child has {self.vehicle}")


p = Parent('scooter')
obj = Child('car')
obj.display()