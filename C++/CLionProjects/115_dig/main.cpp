#include <iostream>
#include<string>
using namespace std;
int main() {
    long long x = 0;
    string x1;
    cin >> x1;
    int arr[10];
    for(int i =0; i<10;i++){
        arr[i] = 0;
    }

    for(int i =0; i<x1.length(); i++){
        if(x1[i]=='1')
            arr[1]++;
        if(x1[i]=='2')
            arr[2]++;
        if(x1[i]=='3')
            arr[3]++;
        if(x1[i]=='4')
            arr[4]++;
        if(x1[i]=='5')
            arr[5]++;
        if(x1[i]=='6')
            arr[6]++;
        if(x1[i]=='7')
            arr[7]++;
        if(x1[i]=='8')
            arr[8]++;
        if(x1[i]=='9')
            arr[9]++;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    for(int i = 1; i<10;i++)
        x += arr[i]*i;
    cout << x;
    return 0;
}
