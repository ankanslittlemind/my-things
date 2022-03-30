str1 = input('Enter first string : ')
str2 = input('Enter second string : ')

count = {}
for word in str1.split():
    count[word] = count.get(word, 0) + 1
for word in str2.split():
    count[word] = count.get(word, 0) + 1
  
uncommon =  [word for word in count if count[word] == 1]

print("Uncommom words:", uncommon)