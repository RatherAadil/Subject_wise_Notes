# import sys
# print("Name of the program is : ",sys.argv[0])
# for arg in sys.argv[1:]:
#     print(arg)

#########################################
import sys

def main():
	if len(sys.argv) < 3:
		num1 = int(input("Enter the first Number: "))
		num2 = int(input("Enter the first Number: "))
		print(f"The sum of {num1} and {num2} is ",add(num1,num2))
	else:
		n1 = int(sys.argv[1])
		n2 = int(sys.argv[2])
		print(f"The sum of {sys.argv[1]} and {sys.argv[2]} is :", add(n1,n2))


def add(x,y):
	return x+y

if __name__=="__main__":
	main()
	
