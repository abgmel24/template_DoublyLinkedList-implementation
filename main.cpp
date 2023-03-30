#include "DoublyLinkedList.h"
using namespace std;

int main(int argc, char **argv) {
    DoublyLinkedList<int> *dll = new DoublyLinkedList<int>();

    dll->insertBack(4);
    dll->insertFront(34);
    dll->insertFront(45);
    dll->insertBack(33);
    
    cout << "1. ";
    dll->printList();

    cout << "Node (data 4) at index: " << dll->find(4) << endl;

    cout << "2. ";
    dll->printList();

    dll->removeNode(35);
    cout << "3. ";
    dll->printList();
    dll->removeNode(34);
    cout << "4. ";
    dll->printList();

    dll->removeFront();
    cout << "5. ";
    dll->printList();

    dll->removeBack();
    cout << "6. ";
    dll->printList(); //45
}