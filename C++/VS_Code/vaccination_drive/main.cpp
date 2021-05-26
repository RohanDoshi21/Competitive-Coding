#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int g, p, arr[10];
        cin >> g >> p;
        int total = 0;
        for(int i = 0; i < 10; i++){
            cin >> arr[i];
            total += arr[i];
        }
        int carry_forward = 0;
        int days = 0;
        int i = 9;
        while(total>0){
            int no = arr[i] - p;
            if(no == 0){
                days++;
                total -= p;
                i--;
            } 
            else if( no > 0){
                days++;
                // i an very angry that i cannot  and i 
            }
            else if(no < 0){

            }
        }
    return 0;
}