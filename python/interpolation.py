def interpolation(arr, n, key):
    low = 0
    high = n-1
    while arr[low] != arr[high] and arr[low] <= key <= arr[high]:
        pos = low + (key-arr[low]) * (high-low) // (arr[high]-arr[low])

        if key == arr[pos]:
            return pos

        elif key < arr[pos]:
            high = pos-1

        else:
            low = pos+1

    if key == arr[low]:
        return low

    return -1

arr = [2, 5, 8, 11, 14, 17, 20]
n = 7 
key = 15
i = interpolation(arr, n, key)
if i != -1:
    print('Element found at', i)
else:
    print('Element not found')