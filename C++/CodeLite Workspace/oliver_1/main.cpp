#include<iostream>
using namespace std;

    int sumOfSeries(int n) 
{ 
    return (n * (n + 1) * (2 * n + 1)) / 6; 
} 
  
// Driver function 
int main() 
{ 
    int test_cases;
    cin >> test_cases;
    for(int i=1; i<= test_cases; i++){
        
    
    int n;
    cin >> n;

    
    cout << sumOfSeries(n) << endl; 
    }
    return 0; 
}
