#include<iostream>
#include <string>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s1;
        cin >> s1;
        int count = 0;
        int max = 0;
        for (int i = 0; i< n; i++){

            if( s1[i] =='*'){
                count++;

                if(count > max)
                    max = count;


            }
            else
                count = 0;
        }


        if(max >= k){
            cout << "yes" << endl;
        }
        else
            cout << "no"  << endl;
    }
    return 0;
}