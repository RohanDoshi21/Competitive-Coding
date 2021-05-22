#include <iostream>
using namespace std;
#define max_size 5
class stack{
private:
    int top{};
    int array[max_size]{};
public:
    stack(){
        top = -1;
    }

    bool isEmpty();

    bool isFull();

    void push(int element);

    int pop();

    int peak(int pos);

    int display();
};
bool stack::isEmpty(){
    if (top == -1)
        return true;
    else
        return false;
}
bool stack::isFull(){
    if (top == max_size-1)
        return true;
    else
        return false;
}
int stack::peak(int pos){
    int x = -1;
    if(top-pos+1<0)
        cout << "Invalid Position";
    else
        x = array[top-pos+1];
    return x;
}
void stack::push(int element){
    if (isFull()){
        cout << "Error: Stack Overflow";
    }
    else{
        top++;
        array[top] = element;
    }
}
int stack::pop(){
    if(isEmpty()) {
        cout << "Error: Stack Underflow";

    }
    else{
        return array[top--];
    }
}
int stack::display(){
    for (int i = top; i >=0; i--)
        cout << array[i] << "\t";
    cout << endl;

}

int main() {
    stack s1;
    s1.push(3);
    s1.push(4);
    s1.push(2);
    s1.display();
    return 0;
}
