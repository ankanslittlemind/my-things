n = int(input("Enter number of elements: "))
list1 = []
for i in range(n):
    item = input()
    list1.append(item)
print(list1)
del_el = input("Enter element to remove: ")
list1.remove(del_el)
print(list1)
n = int(input("Enter position to enter element: "))
list1[n-1] = input("Enter element: ")
print(list1)