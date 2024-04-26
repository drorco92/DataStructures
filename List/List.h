//
// Created by Dror on 26/04/2024.
//

#ifndef DATASTRUCTURES_LIST_H
#define DATASTRUCTURES_LIST_H
template <class T>
class Node {
public:
    T data;
    Node *next = nullptr;
    Node(T data) : data(data) {}
    ~Node() { next = nullptr; }
};

template <class T>
class List {
    Node<T> *head = nullptr;
    List() {}
    List(T data) : head(new Node<T>(data)) {}
    void insert(T data) {
        Node<T> *new_node = new Node<T>(data);
        new_node->next = head;
        head = new_node;
    }
    void remove(T data) {
        while (head != nullptr) {
            Node<T> *temp = head->next;
        }
    }
    ~List() {
        while (head != nullptr) {
            Node<T> *temp = head->next;
            delete(head);
            head->next = nullptr;
            head = temp;
        }
    }
};


#endif //DATASTRUCTURES_LIST_H
