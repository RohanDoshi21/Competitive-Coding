#include<iostream>
using namespace std;

int main(){
        int a;
        int b;
        cin>>a;
        cin>>b;
        if (b == 0)
          {  
             do 
             {
                 cin >> b;
             }while( b == 0);
          }
        
        float c=double(a)/double(b);
        
        cout<<c;
        
    return 0;
}