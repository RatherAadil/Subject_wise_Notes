class Prime:
    def __init__(self,number):
        self.num= number

    def isPrime(self):
        for i in range(2,int(self.num**0.5)+1):
            if self.num % i ==0:
                return False
        return True
    

numm = 3
checkPrime = Prime(numm)

print(checkPrime.isPrime())