#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // Pointer to next node in DLL
    Node *prev; // Pointer to previous node in DLL
};
void push_front(Node *&head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (head_ref);
    new_node->prev = NULL;
    if ((head_ref) != NULL)
        (head_ref)->prev = new_node;
    (head_ref) = new_node;
}

void push_back(Node *&head, int new_data)
{
    /* 1. allocate node */
    Node *new_node = new Node();
    Node *last = head;
    /* 2. put in the data */
    new_node->data = new_data;
    /* 3. This new node is going to be the last node, so
    make next of it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new
        node as head */
    if (head == NULL)
    {
        new_node->prev = NULL;
        head = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;

    /* 7. Make last node as previous of new node */
    new_node->prev = last;

    return;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
void onesCompliment(Node *node)
{
    while (node != NULL)
    {
        if (node->data == 1)
        {
            node->data = 0;
            node = node->next;
        }
        else
        {
            node->data = 1;
            node = node->next;
        }
    }
    cout << "Your 1's compliment is: ";
}
void addition(Node *node1, Node *node2)
{
    int remainder = 0;
    Node *ans_head = NULL;
    Node *last1 = node1;
    while (last1->next != NULL)
    {
        last1 = last1->next;
    }
    Node *last2 = node2;
    while (last2->next != NULL)
    {
        last2 = last2->next;
    }
    while (last1->prev != NULL || last2->prev != NULL)
    {
        ans_head->data = (last1->data + last2->data + remainder) % 2;
        push_front(ans_head, ans_head->data);
        remainder = (last1->data + last2->data + remainder) / 2;
        last1 = last1->prev;
        last2 = last2->prev;
    }
    if (remainder != 0)
    {
        push_front(ans_head, remainder);
    }
    printList(ans_head);
}
int main()
{
    while (true)
    {
        Node *head = NULL;
        // push(head,5);
        int n;
        cout << "Enter the number of bits of which you want to create binary number: ";
        cin >> n;
        int bit;
        for (int i = 0; i < n; i++)
        {
            cout << "PLease enter your " << (i + 1) << " bit";
            cin >> bit;
            push_back(head, bit);
        }
        cout << "The binary number which you entered is: " << endl;
        printList(head);
        cout << "**Main menu**" << endl;
        cout << " What do you want to perform?????" << endl;
        cout << "1) 1's compliment" << endl;
        cout << "2) 2's compliment" << endl;
        cout << "3) Binary Addition" << endl;
        cout << "4) Exit" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            onesCompliment(head);
            printList(head);
        }
        if (choice == 3)
        {
            Node *head_sec = NULL;
            int sec_bit;
            for (int i = 0; i < n; i++)
            {
                cout << "PLease enter your " << (i + 1) << " bit";
                cin >> sec_bit;
                push_back(head_sec, sec_bit);
            }
            addition(head,head_sec);
        }
    }
    return 0;
}