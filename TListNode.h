#ifndef TLISTNODE_H
#define TLISTNODE_H

#include <iostream>
#include <exception>

template <class T>
class TListNode {
    public:
        TListNode<T> *next;
        TListNode<T> *prev;
        T data;

        TListNode() {}

        TListNode(T d) {
            next = NULL;
            prev = NULL;
            data = d;
        }

        ~TListNode() {
            delete next;
            delete prev;
        }
};

#endif