a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
c = int(input("Enter 3rd number: "))
if(a>=b and a>=c):
    largest = a
elif(b>=c and b>=a):
    largest = b
elif(c>=a and c>=b):
    largest = c
print(largest, "is the largest number")