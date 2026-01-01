str = "This is a test string"
vowels= 'aeiou'

unique_vowels={i for i in str if i in vowels}
print(unique_vowels)

string = "This is a test string."
vowels = {vowel for vowel in string if vowel in "aeiou"}
print(vowels)