#include<iostream>
using namespace std;

int main(){
        int size;
        cin >> size;
        int weight = 0;
       int arr[size];
       for(int i =0; i<size; i++)
       {
           cin >> arr[i];
       }
       for(int i=0; i<size-1; i++)
       {
           if(arr[i]+1<=arr[i+1])
               weight++;
       }
       cout << weight << endl;
	return 0;
}
