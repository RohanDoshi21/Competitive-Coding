class Sorting:
    def __init__(self):
        self.insertionSortList = []
        self.list = []
        self.shellSortList = []

    def insertionSort(self):
        self.insertionSortList = list(self.list)
        for j in range(1, len(self.insertionSortList)):
            temp = self.insertionSortList[j]
            self.insert(temp, j - 1)
            print(self.insertionSortList)

        print(self.insertionSortList)

    def insert(self, temp, i):
        while temp < self.insertionSortList[i] and i >= 0:
            self.insertionSortList[i + 1] = self.insertionSortList[i]
            i -= 1
        self.insertionSortList[i + 1] = temp

    def ShellSort(self):
        self.shellSortList = list(self.list)
        n = len(self.shellSortList)
        gap = n // 2
        while gap > 0:
            j = gap
            while j < n:
                i = j - gap
                while i >= 0:
                    if self.shellSortList[i] > self.shellSortList[i + gap]:
                        self.shellSortList[i], self.shellSortList[i + gap] = self.shellSortList[i + gap], \
                                                                             self.shellSortList[i]
                        i = i - gap
                    else:
                        break

                j += 1
            gap //= 2
            print(self.shellSortList)

        print(self.shellSortList)


list2 = Sorting()
list2.list = [3, 6, 2, 12, 9, 23, 4]
list2.ShellSort()


def ShellSort(list1):
    n = len(list1)
    gap = n // 2
    while gap > 0:
        j = gap
        while j < n:
            i = j - gap
            while i >= 0:
                if list1[i] > list1[i + gap]:
                    list1[i], list1[i + gap] = list1[i + 1], list1[i]
                    i = i - gap
                else:
                    break
            j += 1
        gap //= 2
    print(list1)


ShellSort(list2.list)
