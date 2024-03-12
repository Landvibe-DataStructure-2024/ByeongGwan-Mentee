#include <iostream>
using namespace std;
class node {
private:
    int val;
    node* next;

public:
    node(int val) {
        this->val = val;
        next = nullptr;
    }

    void setNext(node* nextNode) {
        this->next = nextNode;
    }

    node* getNext() {
        return next;
    }

    int getVal() {
        return val;
    }

};


class linkedList {
public:
    linkedList();

    bool empty();

    void append(int val);

    void insert(int idx, int val);

    int erase(int idx);

    void print();

    void updateSize(int n);

    void getMin();

private:
    node* head;
    node* tail;
    int size;
};




int main() {

}