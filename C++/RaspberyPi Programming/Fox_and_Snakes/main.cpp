#include<iostream>
using namespace std;

int main(){
       int column_no;
       int row_no;
       cin >> row_no >> column_no;
       for(int i =1 ; i <= row_no; i++)
       {
           for (int j=1; j <= column_no; j++)
           {
               if(i%2 == 1)
                   cout << "#";
                else if((i/2)%2==1 && j != column_no)
                    cout << ".";
                else if((i/2)%2==0 && j != 1)
                    cout << ".";
                 else 
                    cout << "#";
           }
           cout << endl;
       }
    return 0;
}