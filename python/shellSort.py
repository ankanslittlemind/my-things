def shellSort(arr):
    gap = len(arr) // 2
    while gap > 0:
        i = 0
        j = gap
        while j < len(arr):
            if arr[i] > arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
            i +=  1
            j += 1

            k = i
            while k - gap > -1:
                if arr[k - gap] > arr[k]:
                    temp = arr[k - gap]
                    arr[k - gap] = arr[k]
                    arr[k] = temp
                k -= 1
        gap //= 2

size = int(input('Enter size of array: '))
arr = []
for i in range(size):
    el = int(input())
    arr.append(el)
shellSort(arr)
print(arr)