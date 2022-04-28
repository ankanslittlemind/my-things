def linearSearch(arr, size, key):
    for i in range(0, size):
        if arr[i] == key:
            return i
    return -1
size = int(input("Enter size of array: "))
arr = []
for i in range(0,size):
    a = int(input())
    arr.append(a)
print(arr)
key = int(input('Enter element to be searched: '))
index = linearSearch(arr, size, key)
if index == -1:
    print('Element not found')
else:
    print('Element present at index:', index)