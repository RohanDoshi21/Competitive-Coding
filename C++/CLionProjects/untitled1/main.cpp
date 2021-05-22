#include <iostream>
using namespace std;

int calculate_triplet(){
    int a,b,c;
    for(a = 1; a< 1000;a++){
        for(b=a; b< 1000; b++){
            for(c = b; c< 1000; c++){
                if(((a*a + b*b) == c*c) && a+b+c == 1000){
                    return a*b*c;

                }
            }
        }
    }
    return 0;
}


int main() {
    cout << calculate_triplet();
    return 0;
}
