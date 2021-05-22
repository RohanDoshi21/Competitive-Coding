#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
class Circular_Linked_List{
private:
    Node* head;
public:
    Circular_Linked_List(){
        head = nullptr;
    }
    void insert(int key);
    void Display();
    void insert_pos(int key, int pos);
};

void Circular_Linked_List::insert(int key) {
        Node *p = new Node;
        p->data = key;
        p->next = nullptr;

        Node *q = head;
        if(head == nullptr){
            head = p;
            head->next = head;
        }
        else{
            while (q->next!= head){
                q =q->next;
            }
            q->next = p;
            p->next = head;
        }

}

void Circular_Linked_List::Display() {
    Node *p = head;

    do{
        cout << p->data << endl;
        p = p->next;
    } while (p!= head);
}

void Circular_Linked_List::insert_pos(int key, int pos) {
    Node *p = new Node;
    p->data = key;
    Node *temp = head;
    if (head == nullptr){
        head = p;
        p->next = p;
    }
    else if(pos == 0){

        while (temp->next!= head)
        {
            temp = temp->next;
        }
        p->next = head;
        head = p;
        temp->next = p;
    }
    else{
        for (int i = 1; i < pos; ++i) {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
    }
}

int main() {

    int number_elements;
    cin >> number_elements;
    Circular_Linked_List c1;
    for (int i = 0; i < number_elements; ++i) {
        int key;
        cin >>key;
        c1.insert(key);
    }
    c1.Display();
    cout << endl;
    return 0;
}
