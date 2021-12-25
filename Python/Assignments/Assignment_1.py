class Students:
    def __init__(self):
        self.sportsList = []

    def getInput(self):
        x = int(input("Enter no of students in List"))
        for i in range(x):
            student = input(f"Enter student at {i + 1} position ")
            while student in self.sportsList:
                student = input(f"{student} already present in the List, re-enter the student")
            self.sportsList.append(student)


def intersection(list1, list2):
    list3 = []
    for i in list1:
        if i in list2:
            list3.append(i)

    return list3


def union(list1, list2):
    list3 = list(list1)
    for i in list2:
        if i not in list3:
            list3.append(i)

    return list3


def difference(list1, list2):
    list3 = list(list1)
    for i in list2:
        if i in list1:
            list3.remove(i)

    return list3


s1 = Students()
s2 = Students()

s1.getInput()
s2.getInput()

print("Intersection")
print(intersection(s1.sportsList, s2.sportsList))

print("Difference")
print(difference(s1.sportsList, s2.sportsList))

print("union")
print(union(s1.sportsList, s2.sportsList))
