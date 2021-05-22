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

    bool isEmpty();
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

bool Stack::isEmpty() {
    if  (top == nullptr)
        return true;
    else
    return false;
}

int main() {
    Stack s1;
    string s2;
    cin >> s2;
    bool flag = true;
    for (char i : s2) {
        if (i == '(')
            s1.push(1);

        else if (i == ')' && !s1.isEmpty())
            s1.pop();

        else if (i == ')' && s1.isEmpty()) {
            flag = false;
            exit;
        }
    }
    cout << (s1.isEmpty() && flag ? "Correct" : "Error");
    return 0;
}
