#include <bits/stdc++.h>
using namespace std;
class Node {
private:
public:
    int data;
    Node *next;
    Node(int data = 0, Node *next = nullptr) {
        this->data = data;
        this->next = next;
    }
    friend class CLL;
};

class Circularll
{
private:
    Node *head;
    Node *tail;
public:


    Circularll(const int arr[], int n) {

        // head = new Node;
        head = nullptr;
        tail = nullptr;
        for (int i = 0; i < n; ++i)
        {
            Node *temp  = new Node;
            temp->data = arr[i];
            // temp->next = nullptr;
            if (head == nullptr) {
                head = temp;
                tail = temp;
                temp->next = head;
                // head->data = temp->data;
                // head->next = head;
                // tail = head;
            } else {
                temp->next = head;
                tail->next = temp;
                tail = temp;
            }
        }

    }
    // void display() {
    // 	Node *p = head;

    // 	while (p->next != head) {
    // 		cout << p->data << endl;
    // 	}
    // 	cout << p->data << endl;
    // 	return;
    // }
    void detectCircularLoop() {
        Node *slow = head;
        Node *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                cout << "Cycle present" << endl;
                return;
            }
        }

        cout << "Not present" << endl;
   }

    void display() {
        Node *p = head;
        do {
            cout << p->data << " " ;
            p = p->next;
        } while (p != head);
        cout << endl;
    }

};
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    Circularll cllist(arr, n);
    cllist.display();
    // cllist.detectCircularLoop();

    return 0;
}