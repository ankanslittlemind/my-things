def sort(arr, size):
    for i in range(0, size):
        for j in range(i+1, size):
            if arr[j] < arr[i]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr
size = int(input("Enter size of array: "))
arr = []
for i in range(0,size):
    a = int(input())
    arr.append(a)
print('Unsorted array:', arr)
print('Sorted array:',sort(arr, size))