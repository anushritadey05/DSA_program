def merge_sorted_arrays(arr1, arr2):
    merged = []
    i = j = 0

    # Traverse both arrays and merge
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            merged.append(arr1[i])
            i += 1
        else:
            merged.append(arr2[j])
            j += 1

    # Append remaining elements (if any)
    while i < len(arr1):
        merged.append(arr1[i])
        i += 1

    while j < len(arr2):
        merged.append(arr2[j])
        j += 1

    return merged

arr1 = [1, 3, 5, 7]
arr2 = [2, 4, 6, 8, 10]

merged_array = merge_sorted_arrays(arr1, arr2)
print("Merged Sorted Array:", merged_array)

