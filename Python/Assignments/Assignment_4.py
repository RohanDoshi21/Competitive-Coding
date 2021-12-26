class Searching:
    def __init__(self):
        self.unsortedList = []
        self.sortedList = []
        self.fibonacciSeries = [0] * 20
        self.FibonacciList()

    def LinearSearch(self, key):
        for i in range(len(self.unsortedList)):
            if key == self.unsortedList[i]:
                return i
        return -1

    def SentinelSearch(self, key):
        last = self.unsortedList[len(self.unsortedList) - 1]
        self.unsortedList[len(self.unsortedList) - 1] = key

        i = 0
        while self.unsortedList[i] != key:
            i += 1

        self.unsortedList[len(self.unsortedList) - 1] = last

        if i < len(self.unsortedList) - 1 or last == key:
            return i

        else:
            return -1

    def BinarySearch(self, key):
        low = 0
        high = len(self.sortedList) - 1

        while low <= high:
            mid = (low + high) // 2
            if self.sortedList[mid] == key:
                return mid
            elif self.sortedList[mid] > key:
                high = mid - 1
            else:
                low = mid + 1

        return -1

    def FibonacciList(self):
        self.fibonacciSeries[0] = 0
        self.fibonacciSeries[1] = 1

        for i in range(2, 20):
            self.fibonacciSeries[i] = self.fibonacciSeries[i - 2] + self.fibonacciSeries[i - 1]

    def FibonacciSearch(self, key):
        m = 0
        while self.fibonacciSeries[m] < len(self.sortedList):
            m += 1

        offset = -1
        while self.fibonacciSeries[m] > 1:
            i = min(offset + self.fibonacciSeries[m - 2], len(self.sortedList) - 1)

            if key > self.sortedList[i]:
                m -= 1
                offset = i
            elif key < self.sortedList[i]:
                m -= 2
            else:
                return i

        return -1


list1 = Searching()
# list1.unsortedList = [12, 15, 21, 2, 19, 87]
# print(list1.SentinelSearch(12))
# print(list1.LinearSearch(88))
#
list2 = Searching()
list2.sortedList = [12, 15, 18, 23, 97, 101, 123, 876, 1000]
# print(list2.BinarySearch(12))
# print(list2.BinarySearch(15))
# print(list2.BinarySearch(97))
# print(list2.BinarySearch(1000))
# print(list2.BinarySearch(0))
# print(list2.BinarySearch(10000))

# list2.FibonacciList()
# print(list2.fibonacciSeries)
print(list2.FibonacciSearch(12))
print(list2.FibonacciSearch(15))
print(list2.FibonacciSearch(97))
print(list2.FibonacciSearch(1000))
print(list2.FibonacciSearch(0))
print(list2.FibonacciSearch(10000))
