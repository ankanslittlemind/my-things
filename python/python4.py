d1 =  {'a': 100, 'b': 200, 'c':300}
d2 =  {'a': 300, 'b': 200, 'd':400}
d3 = {}
print(d1)
print(d2)
for key1, value1 in d1.items():
    for key2, value2 in d2.items():
        if key1 == key2:
            d3[key1] = value1 + value2
print("\nDictionary after combining with same keys:")
print(d3)