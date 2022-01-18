#include <iostream>

using namespace std;

class GLLNode {
    GLLNode *next;
    bool tag;
    union node {
        char data;
        GLLNode *down;
    } data{};

public:
    explicit GLLNode(bool tag = false, char data = '\0') : next(nullptr), tag(tag) {
        if (!tag) {
            this->data.data = data;
        } else {
            this->data.down = nullptr;
        }
    };

    friend class GLL;
};

class GLL {

public:
    GLLNode *head;

    GLL() : head(nullptr) {};



    GLLNode *create(string str) {
        static int i = 0;
        GLLNode *q;
        GLLNode *s;
        GLLNode *start = nullptr;
        while (i < str.length()-1) {
            if (str[i] == '(') {
                q = new GLLNode(true);
                i++;
                q->data.down = create(str);

                if (start == nullptr) {
                    start = q;
                } else {
                    s = start;

                    while (s->next != nullptr) {
                        s = s->next;
                    }
                    s->next = q;
//                    return q;
                }
            } else if (str[i] != ',' && str[i] != '(' && str[i] != ')') {
                q = new GLLNode();
                q->data.data = str[i];
                if (start == nullptr) {
                    start = q;
                } else {
                    s = start;

                    while (s->next != nullptr) {
                        s = s->next;
                    }
                    s->next = q;
//                    return q;
                }
            } else if (str[i] == ')') {
                return start;
            }
            i++;
        }
        return start;
    }

    void Display(GLLNode *ptr) {
        GLLNode *t = ptr;
        cout << "( ";
        while (t != nullptr) {
            if (t->tag) {
                t = t->data.down;
                Display(t);
            } else {
                cout << t->data.data << ", ";
                t = t->next;
            }
        }
        cout << ")";
    }

    void print() {
        Display(head);
    }
};

int main() {
    GLL g1;
    string str = "(2,3,(4,6),7)";
    g1.head = g1.create(str);
    g1.print();
    return 0;
}