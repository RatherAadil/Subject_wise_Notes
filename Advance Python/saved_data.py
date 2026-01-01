import sys

def main():
	if len(sys.argv) < 3:
		print("Usage: python script.py <num1> <num2>")
		return

	n1 = int(sys.argv[1])
	n2 = int(sys.argv[2])
	print(f"The sum of two numbers is :", add(n1,n2))

def add(x,y):
	return x+y

if __name__=="__main__":
	main()
