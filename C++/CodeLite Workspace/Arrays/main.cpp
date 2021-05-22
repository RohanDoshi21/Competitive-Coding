#include<iostream>
using namespace std;

int main(){
       int arr[11];
       int length =  sizeof(arr)/sizeof(arr[1]);
       cout << "Fill 10 elemets of the array" << endl;
       for(int i =0; i<length-1; i++){
           cin >> arr[i];
       }
       /* ARRAY INSERTION 
        * 
        * 
        * 
        * 
        * 
        * 
        * 
        * */
       cout << "Enter index and value to be filled" << endl;
       int index;
       int value;
       cin >> index >> value;
       for(int i = length; i > index; i--){
           arr[i] = arr[i-1];
       }
       arr[index] = value;
       cout << "New array is" << endl;
       for(int i =0; i<length; i++){
           cout << arr[i] << "\t";
       }
       /* ARRAY DELETION
        * 
        * 
        * 
        * 
        * 
        * 
        * 
        * */
       cout << "Delete a particular index" << endl;
       cin >> index;
       value = arr[index];
       for(int i = index; i<length-1; i++)
       {
           arr[i] = arr[i+1];
       }
       cout << "The deleted element is " << value << endl;
       cout << "New array is" << endl;
       for(int i =0; i<length-1; i++){
           cout << arr[i] << "\t";
       }
	return 0;
}
