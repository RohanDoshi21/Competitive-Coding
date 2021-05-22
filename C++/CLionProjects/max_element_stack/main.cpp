#include <iostream>
using namespace std;
class Node{
public:
    Node* next;
    int data;
};
class Stack{
private:
    Node* top;
public:
    Stack(){
        top = nullptr;
    }

    void push(int x);

    int pop();

    void Display();

    int maximum();
};
void Stack::push(int x){
    Node *t = new Node;
    if(t == nullptr){
        cout << "Stack Overflow" << endl;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
int Stack::pop(){
    if(top!= nullptr){
        Node *t = top;
        int x = top->data;
        top = top->next;
        delete t;
        return x;
    }
    else{
        cout << "Stack Underflow" << endl;
        return -1;
    }
}
void Stack::Display(){
    Node *t = top;
    while (t!= nullptr){
        cout << t->data << "\t";
        t = t->next;
    }
    cout << endl;
}

int Stack::maximum() {
    Node *t= top;
    int max =0;
    while ( t->next!= nullptr){
        if (t->data > max){
            max = t->data;
        }
    }
    if (t->data>max){
        max = t->data;
    }
    return max;
}

int main() {
    Stack s1;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x1;
        cin >> x1;
        if (x1 == 1) {
            int y;
            cin >> y;
            s1.push(y);

        } else if (x1 == 2) {
            s1.pop();

        } else if (x1 == 3) {
            cout << s1.maximum() << endl;
        }
    }
    return 0;
}
