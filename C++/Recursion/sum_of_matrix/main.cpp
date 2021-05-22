#include <iostream>
using namespace std;
#define ll long long

int main() {
    int row, column;
    cin >> row >> column;
    int mat_a[row][column];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            cin >> mat_a[i][j];
        }
        
    }
    int mat_b[row][column];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            cin >> mat_b[i][j];
        }
        
    }
    sum_of_matrix(mat_a[rows][column]);
    return 0;
}