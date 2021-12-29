#include <iostream>
using namespace std;

class Node
{
private:
    int start;
    int end;
    int min;
    Node *next;

public:
    Node(int start = 0, int end = 0, int min = 0) : start(start), end(end), min(min){};
    friend class DaySchedule;
};

class DaySchedule
{
private:
    Node *head;
    Node *tail;
    Node *sorted;

public:
    DaySchedule()
    {
        head = tail = nullptr;
    }
    void Book()
    {
        Node *temp = new Node();
        cin >> temp->start >> temp->end >> temp->min;
        if (head = nullptr)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void Display()
    {
        Node *ptr = head;
        while (ptr != nullptr)
        {
            cout << ptr->start << " " << ptr->end << " " << ptr->min << endl;
            ptr = ptr->next;
        }
    }
    void Cancel()
    {
        Node *ptr = head;
        Node *follow = ptr;
        int start_time;
        cin >> start_time;
        while (ptr != nullptr)
        {
            if (ptr->start = start_time)
            {
                if (head->next == nullptr)
                {
                    delete head;
                    head = nullptr;
                    tail = nullptr;
                }
                else if (ptr == head)
                {
                    head = head->next;
                    delete ptr;
                    return;
                }
                else if (ptr == tail)
                {
                    delete ptr;
                    follow->next = nullptr;
                    tail = follow;
                    return;
                }
                else
                {
                    follow->next = ptr->next;
                    delete ptr;
                    return;
                }
            }
            follow = ptr;
            ptr = ptr->next;
        }
    }

    void insert(Node *temp)
    {
        if (sorted == nullptr || sorted->start > temp->start)
        {
            temp->next = sorted;
            sorted = temp;
        }
        else
        {
            Node *current = sorted;
            while (current->next != nullptr && current->next->start < temp->start)
            {
                current = current->next;
            }
            temp->next = current->next;
            current->next = temp;
        }
    }
    void insertionSort()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *next = current->next;
            insert(current);
            current = next;
        }
        head = sorted;
    }
};

int main()
{
    DaySchedule today;
    bool repeat = true;
    while (repeat)
    {

        cout << "\n *** Menu ***";
        cout << "\n 1. Book an Appointment";
        cout << "\n 2. Display Slots";
        cout << "\n 3. Sort based on start time";
        cout << "\n 4. Cancel an Appointment";
        cout << "\n 5. Sort pointer manipulation";
        cout << "\n 6. Exit";

        cout << "\n\n Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            today.Book();
            break;

        case 2:
            today.Display();
            break;

        case 3:
            today.insertionSort();
            break;

        case 4:
            today.Cancel();
            break;

        case 5:
            today.insertionSort();
            break;

        case 6:
            repeat = false;
            break;

        default:
            cout << "\n\t Wrong choice!!!";
        }
    }
    return 0;
    return 0;
}