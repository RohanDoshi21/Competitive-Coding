#include<iostream>
#include<memory> 
#include "Test.h"
using namespace std;




void fuct( shared_ptr<Test> &t1){
    cout<<t1.use_count()<<endl;
}


int main(){
    shared_ptr<Test> ptr_1 {new Test {100}};
    ptr_1->call_value();
    ptr_1->change_value(32);
    shared_ptr<Test> ptr_2 {ptr_1};
    fuct(ptr_1);
    fuct(ptr_2);
    ptr_1.reset();
    fuct(ptr_1);
    fuct(ptr_2);
    return 0;
}