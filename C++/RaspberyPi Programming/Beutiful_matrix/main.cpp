#include<iostream>
using namespace std;

int main(){
       int a[5][5];
       int matrix_pos_i;
       int matrix_pos_j;
       for(int i = 0 ; i < 5 ; i++){
           for(int j = 0 ; j < 5 ; j++){
               cin >> a[i][j] ;
           }
       }
       for(int i = 0 ; i < 5 ; i++){
           for(int j = 0 ; j < 5 ; j++){
                if(a[i][j] == 1){
                     matrix_pos_i = i;
                     matrix_pos_j = j;
                }
           }
       }
       int result = abs(2-matrix_pos_i) + abs(2-matrix_pos_j); 
       
       cout << result;
    return 0;
}