#include <iostream>
using namespace std;
#define size 10

int main() {
    int arr[size];
    int *ptr = arr;
    cout << "Enter 10 elements \n";
    for (int & i : arr)
    {
        cin >> i;
    }

    int find;
    cout << "Enter element to be found" << "\n";
    cin >> find;

    for (int i = 0; i < size; i++)
    {
        if(*ptr == find){
            cout << "Element present at index " << i << "\n";
            break;
        }
        ptr++;
    }

    return 0;
}