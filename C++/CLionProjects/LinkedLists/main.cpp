#include <iostream>
using namespace std;
class Node {
    int data;
    Node *next;
public:

    explicit Node(int data = 0, Node* next = nullptr): data(data) , next(next){};
    friend class LinkedList;
};

class LinkedList {
private: Node *head;
    Node *tail;
public:

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    LinkedList(const int arr[], int n) {
        Node *temp;
        head = nullptr;

        for (int i = 0; i < n; ++i)
        {
            temp = new Node;
            temp->data = arr[i];
            temp->next = nullptr;

            if (head == nullptr) { // if linked list is empty
                head = temp;
                tail = temp;
            } else { // insert at last
                tail->next = temp;
                tail = temp;
            }
        }
    }

    void display() {
        Node *p = head;

        while (p->next != nullptr) {
            cout << p->data << "->";
            p = p->next;
        }
        cout << p->data;
        cout << endl;
    }

    void insert(int pos, int x ) {
        // 2 links are modified
        Node *temp;
        temp = new Node;
        temp->data = x;

        if (pos == 0) {
            temp->next = head;
            head = temp;
        } else if (pos  > 0 ) {
            Node *p;
            p = head;
            for (int i = 0; i < pos-1; ++i)
            {
                p = p->next;
                if (p == nullptr) {
                    cout << "Invalid Position" << endl;
                    return;
                }
            }
            if (p->next == nullptr){
                insertAtLast(x);
                return;
            }
//            if (p != nullptr) {
                temp = new Node;
                temp->data = x;
                temp->next = p->next;
                p->next = temp;
//            }
        }

    }

    void insertAtLast(int x) {
        Node *temp = new Node;
        temp->data = x;
        temp->next = nullptr;

        tail->next = temp;
        tail = temp;

//        Node *ptr = head;
//        while(ptr->next != nullptr){
//            ptr = ptr->next;
//        }
//        ptr->next = temp;
    }

};
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    LinkedList ll (arr, n);
    ll.insert(6, 8);
    ll.insert(7,8);
    ll.insertAtLast(10);
    ll.display();
    return 0;
}