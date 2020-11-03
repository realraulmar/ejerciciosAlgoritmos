def particion(arr,low,high):
    i = (low - 1)
    pivot = arr[high]

    for j in range(low, high):
        if arr[j] <= pivot:
            i = i+1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return (i + 1)

def quickSort(arr, low, high):
    if low < high:
        partition_index = particion(arr, low, high)
        quickSort(arr, low, partition_index - 1)
        quickSort(arr, partition_index + 1, high)

arr = [1992,1990,10,5,6,0,1,23,9,18-10]
n = len(arr)
quickSort(arr, 0, n - 1)
print("Array ordenado: ")
for i in range(n):
    print("%d" %arr[i]) 