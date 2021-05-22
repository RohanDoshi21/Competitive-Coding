#include <iostream>
using namespace std;
 
// function to return maximum element using recursion
int findMaxRec(int A[], int n)
{
    // if n = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}
 
// driver code to test above function
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout <<  findMaxRec(A, n);
    return 0;
}