
#include<iostream>
using namespace std;


class Test{
  private: int value;
public:
    Test(){
        value = 0;
    }
    Test(int passed_on_int){
        value = passed_on_int;
    }
    ~Test(){
        cout << value << "\n";
    }
    void call_value(){
        cout << value << endl;
    }
    void change_value(int passed_on_int){
        value = passed_on_int;
        
    }
    
};

