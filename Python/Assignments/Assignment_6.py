# def partition(start, end, list1):
#     pivot_index = start
#     pivot = list1[start]
#
#     while start < end:
#         while start < len(list1) and list1[start] <= pivot:
#             start += 1
#
#         while list1[end] > pivot:
#             end -= 1
#
#         if start < end:
#             list1[start], list1[end] = list1[end], list1[start]
#
#     list1[end], list1[pivot_index] = list1[pivot_index], list1[end]
#
#     return end


# def partition(start, end, list1):
#     pivot_index = start
#     pivot = list1[start]
#
#     while start < end:
#         while start < len(list1) and list1[start] <= pivot:
#             start += 1
#         while list1[end] > pivot:
#             end -= 1
#         if start < end:
#             list1[start], list1[end] = list1[end], list1[start]
#
#     list1[pivot_index], list1[end] = list1[end], list1[pivot_index]
#
#     return end


def partition(start, end, list1):
    pivot_index = start
    pivot = list1[start]
    while start < end:
        while start < len(list1) and list1[start] <= pivot:
            start += 1
        while list1[end] > pivot:
            end -= 1
        if start < end:
            list1[end], list1[start] = list1[start], list1[end]

    list1[end], list1[pivot_index] = list1[pivot_index], list1[end]

    return end


def QuickSort(start, end, list1):
    if start < end:
        p = partition(start, end, list1)
        QuickSort(start, p - 1, list1)
        QuickSort(p + 1, end, list1)


list2 = [10, 11]
QuickSort(0, len(list2) - 1, list2)
print(list2)

array = [10, 7, 8, 9, 1, 5]
QuickSort(0, len(array) - 1, array)

print(f'Sorted array: {array}')
