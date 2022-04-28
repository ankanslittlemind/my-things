tupleOfTuples = (('I', 'am', 'absent'), ('I', 'am', 'present'))
print(tupleOfTuples)
flag = 0
el = input('Enter element: ')
for tuples in tupleOfTuples:
    for tupl in tuples:
        if tupl == el:
            flag = 1
if flag == 1:
    print('Element is present.')
else:
    print('Element not found.')