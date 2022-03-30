n = int(input("Enter number: "))

perfect_sum = 0
for i in range(1, n):
    if n%i == 0:
        perfect_sum = perfect_sum + i
if perfect_sum == n:
    print(n, "is a perfect number.")
elif perfect_sum != n:
    print(n, "is not a perfect number.")

armstrong_temp = n
armstrong_sum = 0
while armstrong_temp > 0 :
    armstrong_digit = armstrong_temp%10
    armstrong_sum = armstrong_sum + (armstrong_digit**3)
    armstrong_temp = armstrong_temp//10
if n == armstrong_sum:
    print( n,"is an armstrong number.")
elif n != armstrong_sum :
    print( n, "is not armstrong number.")

palidrome_temp=n
palidrome_rev=0
while(palidrome_temp>0):
    palidrome_digit = n%10
    palidrome_rev = palidrome_rev*10+palidrome_digit
    palidrome_temp = palidrome_temp//10
if n == palidrome_rev:
    print(n, "is a palindrome.")
elif n != palidrome_rev:
    print(n, "is not a palindrome.")