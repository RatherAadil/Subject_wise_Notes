string ="the quick brown fox jumps over the lazy dog"
#vowels =['a','e','i','o','u']
vowels ='AaEeIiOoUu'

count = len([i for i in string if i in vowels])
print(count)