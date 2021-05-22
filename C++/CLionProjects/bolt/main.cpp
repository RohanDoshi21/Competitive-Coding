#include <iostream>
using namespace std;
int round_funct(int time){
    if(time%10 >=5 ){
        time += 10;
    }
    return time;
}
int main() {
    int t;
    cin >> t;
    while (t--){
        float k1,k2,k3,v;
        cin >> k1 >> k2 >> k3 >> v;
        float time = 100/(k1*k2*k3*v);
        time = time*1000;
        //cout << time << endl;
        float time1 = round_funct(time);
        time1 = time1/1000;
        if (time1<9.58){
            cout << "yes" << endl;
        }
        else cout << "no" << endl;

    }
    return 0;
}
