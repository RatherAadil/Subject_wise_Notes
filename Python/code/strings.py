name='Alice'
age=25
print('my name is %s and i am %d years old' %(name,age))
print('my name is {} and i am {} years old' .format(name,age))
print(f"my name is {name} and i am {age} years old")

from string import Template
template=Template('my name is $name and i am $age years old')
print(template.substitute(name=name,age=age))
