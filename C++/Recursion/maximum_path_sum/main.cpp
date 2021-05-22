#include <iostream>
#include <vector>
using namespace std;
int n,m;
//int sum = 0;
int arr[11][11];
int find_max_path( int rows, int columns){
    static int rows_tot = n-1;
    static int columns_tot = m-1;
    if (rows == rows_tot && columns == columns_tot)
        return arr[rows][columns];
    if (rows > rows_tot || columns > columns_tot)
        return -1000000007;
    int c1 = arr[rows][columns] + find_max_path(rows+1, columns);
    int c2 = arr[rows][columns] + find_max_path(rows, columns+1);
    return max(c1,c2);
}

int main() {
    for (size_t i = 0; i < 11; i++)
    {
        for (size_t j = 0; j < 11; j++)
            arr[i][j] = 0;
    }
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    cout << find_max_path(0, 0) << endl;
    return 0;
}