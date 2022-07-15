#include<bits/stdc++.h>

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    Node *head, *tail;
    int size;
public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return size == 0;
    }

    void enqueue(int data) {
        Node* temp = new Node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = tail->next;   
        }
        size++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty())    return -1;
        Node* temp = head;
        temp->data = head->data;
        head = head->next;
        temp->next = NULL;
        size--;
        return temp->data;
    }

    int front() {
        if(isEmpty())    return -1;
        return head->data;
    }
};
