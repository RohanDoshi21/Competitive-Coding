#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    void printa(){
        cout << "A\n"; 
    }
};
class B : public A {
    public:
        void printB(){
            cout << "B\n";
        }
};
class C: public B{
    public: 
        void printC(){
            cout << "C\n";
        }
};

int main() {
    C obj;
    obj.printC();
    obj.printB();
    obj.printa();
    return 0;
}