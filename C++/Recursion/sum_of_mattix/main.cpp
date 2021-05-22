#include<iostream>
using namespace std;

int main()
{
   int row, col;
   cin>>row;
   cin>>col;
   int  m1[row][col];
   int  m2[row][col];
   int  sum[row][col];
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j];
        if(j != col-1)
            cout <<" ";
        else
            cout << endl;
      }
   }

   return 0;
}