#include<iostream>
using namespace std;

int main(){
        int k , l , m, n , d;
        cin >> k >> l >> m >> n >> d;
       bool a[d+1];
       a[0] = 1;
       int damaged_dragons {0};
       for (int i = 1; i <= d; i++)
       {
           a[i] = 1;
       }
       for (int i = k; i <= d; i += k)
       {
            a[i] = 0;
        }
        for (int i = l; i <= d; i += l)
       {
            a[i] = 0;
        }
        for (int i = m; i <= d; i += m)
       {
            a[i] = 0;
        }
        for (int i = n; i <= d; i += n)
       {
            a[i] = 0;
        }
        for (int i = 1; i <= d; i++)
       {
           if(a[i] == 0){
           damaged_dragons++;
           }
       }
       cout<<damaged_dragons;
    return 0;
}