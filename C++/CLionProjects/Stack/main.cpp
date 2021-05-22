#include <iostream>
using namespace std;
#define size 5
class Stack{
    int top;
    int arr[size];
public:

    Stack(){
        top = -1;
    }

    bool isFull();
    bool isEmpty();

    void push(int x);

    int pop();

    int peek();
};
bool Stack::isEmpty() {
    if(top==-1)
        return true;
    else
        return false;
}
bool Stack::isFull() {
    if (top ==size-1)
        return true;
    else
        return false;
}
void Stack::push(int x){
    if(isFull()){
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = x;
    }
}
int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return 0;
    } else {
        int x = arr[top];
        arr[top] = 0;
        top--;
        return x;
    }
}
int Stack::peek(){
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        return arr[top];
    }
}
int main() {
    Stack s1;
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    s1.push(16);
    s1.push(17);
    cout << s1.peek() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() <<endl;

    return 0;
}
