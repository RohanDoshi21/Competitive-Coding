#include <iostream>
using namespace std;
class Node{
public:
    Node* next;
    char data;
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

    int peek();

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

int Stack::peek() {
    Node *t = top;
    if (t!= nullptr)
        return t->data;
    else
        return 0;
}

bool Stack::isEmpty() {
    if (top == nullptr )
        return true;
    else
        return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Stack s1;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(')
                s1.push(1);
            else if (s[i] == '{')
                s1.push(2);
            else if (s[i] == '[')
                s1.push(3);
            else if (s[i] == ')') {
                if (s1.peek() == 1)
                    s1.pop();
                else {
                    flag = false;
                    break;
                }
            } else if (s[i] == '}') {
                if (s1.peek() == 2)
                    s1.pop();
                else {
                    flag = false;
                    break;
                }
            } else if (s[i] == ']') {
                if (s1.peek() == 3)
                    s1.pop();
                else {
                    flag = false;
                    break;
                }
            }
        }
        flag && s1.isEmpty() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
