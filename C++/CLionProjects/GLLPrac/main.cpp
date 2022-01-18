#include <iostream>

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
    GLLNode *head;
public:
    GLL() : head(nullptr) {};

    void Create() {

    }

    void Insert() {

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
