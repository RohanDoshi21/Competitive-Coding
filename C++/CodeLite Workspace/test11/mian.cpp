#include <iostream>
using namespace std;
class Counter{
    private:
        int counter;
    public:
        Counter(){
            counter = 0;
        }
        int getdata(){return counter;}
        Counter operator ++(int){
            counter++;
        }
        
};
int main() {
    Counter c1;
    cout << c1.getdata() <<endl;
    c1++;
    cout << c1.getdata() <<endl;
    return 0;
}