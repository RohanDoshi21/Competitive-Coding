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
    Stack s2;
    Stack s3;
    int s11,s22,s33;
    int height1 = 0;
    int height2 = 0;
    int height3 = 0;

    cin >> s11 >> s22 >> s33;
    for (int i = 0; i < s11; ++i) {
        int x;
        cin >> x;
        height1 +=x;
        s1.push(x);
    }
    for (int i = 0; i < s22; ++i) {
        int x;

        cin >> x;
        height2 +=x;
        s2.push(x);
    }
    for (int i = 0; i < s33; ++i) {
        int x;

        cin >> x;
        height3 +=x;
        s3.push(x);
    }
    while (height1!=height2 && height1!=height3){
        if (height1 > height2 && height1 > height3){
            height1 -= s1.pop();
        }
        if (height2 > height1 && height2 > height3){
            height2 -= s2.pop();
        }
        if (height3 > height2 && height3 > height1){
            height3 -= s3.pop();
        }

    }
    cout << height1;
    return 0;
}
