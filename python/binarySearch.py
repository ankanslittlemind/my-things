def binarySearch(arr, size, key):
    left = 0
    right = size - 1
    mid = 0
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] < key:
            left = mid + 1
        elif arr[mid] > key:
            right = mid - 1
        else:
            return mid
    return -1
size = int(input("Enter size of array: "))
arr = []
for i in range(0,size):
    a = int(input())
    arr.append(a)
print(arr)
key = int(input('Enter element to be searched: '))
index = binarySearch(arr, size, key)
if index == -1:
    print('Element not found')
else:
    print('Element found at index:', index)