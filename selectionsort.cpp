# Selection Sort

arr = [50, 20, 40, 10, 30]

n = len(arr)

for i in range(n):
    min = i
    for j in range(i + 1, n):
        if arr[j] < arr[min]:
            min = j

    arr[i], arr[min] = arr[min], arr[i]

print("Sorted array:", arr)
