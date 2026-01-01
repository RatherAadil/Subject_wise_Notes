import sys

def main():
	if len(sys.argv) < 3:
		print("NO arguments provided")
		return

	n1 = int(sys.argv[1])	
	n2 = int(sys.argv[2])
	print("sum of two numbers is ",sum(n1,n2))

	

def sum(x,y):
    return x+y

if __name__ =="__main__":
	main()