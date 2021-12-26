#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node(int data = 0, Node *next = nullptr): data(data) , next(next){};
    friend class CLL;
};

class CLL{
private:
    Node *head;
    Node *tail;
public:
    CLL(){
        head = nullptr;
        tail = nullptr;
    }
    void Create(int data){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        temp->next = head;
    }
    void append(int data){
        if (head == nullptr){
            Create(data);
        }
        else{
            Node *temp = new Node(data);
            tail->next = temp;
            temp->next = head;
            tail = temp;
        }
    }
    void insertAtBegin(int data){
        if (head == nullptr){
            Create(data);
        }
        else {
            Node *temp = new Node(data);
            tail->next = temp;
            temp->next = head;
            head = temp;
        }
    }
    void Display(){
        Node *temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CLL l1;
    l1.Create(50);
    l1.append(25);
    l1.insertAtBegin(10);
    l1.append(25);
    l1.Display();
    return 0;
}
