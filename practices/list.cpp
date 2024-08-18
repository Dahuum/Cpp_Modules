#include <list>
#include <iostream>

// Old bad way

class Node {
    public:
        int data;
        Node* next;

        Node(int value): data(value), next(nullptr){}
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(): head(nullptr){}

        void insert(int value) {
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }
        void printList(){
            Node* current = head;
            while (current)
            {
                std::cout << current->data << "->";
                current = current->next;
            }
            std::cout << "nullptr" << std::endl;
        }
};

void print_list(std::list<int> List) {
    for (const auto& item : List)
        std::cout << item << "->";
    std::cout << "nullptr" << std::endl;
}

int main(void) {
    // LinkedList list;
    // list.insert(3);
    // list.insert(2);
    // list.insert(1);
    // list.printList();
    std::list<int> NewList = {1, 2, 3};
    print_list(NewList);
    NewList.push_back(4);
    NewList.push_front(0);
    print_list(NewList);
}