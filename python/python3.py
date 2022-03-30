a, b, c = input("Enter 3 numbers: "), input(), input()
if a>=b and a>=c:
    print(a, "is the largest")
elif b>=a and b>=c:
    print(b, "is the largest")
elif c>=b and c>=a:
    print(c, "is the largest")