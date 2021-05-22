#include <iostream>
using namespace std;
void product(int no){
    if(no%8==0 || no%8 ==7){
        cout << 1 << endl;
    }
    else if(no%8==3 || no%8 == 4){
        cout << -1 << endl;
    }
    else if(no%8==1 || no%8 == 6){
        cout << "i" << endl;
    }
    else if(no%8==2 || no%8==5 ){
        cout << "-i" << endl;
    }
    else if(no%8==3 || no%8 == 4){
        cout << -1 << endl;
    }
    else if(no%8==7){
        cout << -1 << endl;
    }


}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int no;
        cin >> no;
        product(no);
    }
    return 0;
}
