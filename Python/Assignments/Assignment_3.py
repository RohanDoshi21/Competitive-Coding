class Matrix:
    def __init__(self):
        self.matrix = []
        self.column = 0
        self.row = 0

    def accept(self):
        self.row = int(input("Enter No of Rows"))
        self.column = int(input("No of Columns"))
        for i in range(self.row):
            MatrixApp = []
            for j in range(self.column):
                x = int(input("Enter Element"))
                MatrixApp.append(x)
            self.matrix.append(MatrixApp)

    def setMatrix(self, row, column):
        self.row = row
        self.column = column
        for i in range(self.row):
            MatrixApp = []
            for j in range(self.column):
                MatrixApp.append(0)
            self.matrix.append(MatrixApp)

    def printMatrix(self):
        for i in range(self.row):
            for j in range(self.column):
                print(self.matrix[i][j], end=" ")
            print()

    def Addition(self, matrix1):
        if self.row != matrix1.row or self.column != matrix1.column:
            print("Not suitable for addition")
            return -1
        result = Matrix()
        result.setMatrix(self.row, self.column)
        for i in range(self.row):
            for j in range(self.column):
                result.matrix[i][j] = self.matrix[i][j] + matrix1.matrix[i][j]

        return result

    def Multiplication(self, matrix1):
        if self.column != matrix1.row:
            print("Matrix not suitable of multiplication")
            return -1

        result = Matrix()
        result.setMatrix(self.row, matrix1.column)
        for i in range(self.row):
            for j in range(matrix1.column):
                for k in range(matrix1.row):
                    result.matrix[i][j] += self.matrix[i][k] * matrix1.matrix[k][j]

        return result

    def Transpose(self):
        result = Matrix()
        result.setMatrix(self.column, self.row)
        for i in range(self.row):
            for j in range(self.column):
                result.matrix[j][i] = self.matrix[i][j]
        return result


obj1 = Matrix()
obj1.accept()
obj1.printMatrix()
obj2 = Matrix()
obj2.accept()
obj2.printMatrix()

obj3 = obj2.Addition(obj1)
obj3.printMatrix()

obj4 = obj2.Multiplication(obj1)
obj4.printMatrix()

obj5 = obj1.Transpose()
obj5.printMatrix()
