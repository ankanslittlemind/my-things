d1 = {'a':100, 'b':104, 'c':99, 'd':101, 'e': 110}
d2 = {}
val = []
max3 = []
print(d1)
for value in d1.values():
    val.append(value)
val.sort()
max3 = val[(len(val)-3):len(val)]
for key, value in d1.items():
    for i in max3:
        if i == value:
            d2[key] = value
print("\nKeys with 3 highest:")
print(d2)