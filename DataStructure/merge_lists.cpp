#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *result = nullptr;
    SinglyLinkedListNode *tail = nullptr;
    if(head1->data>head2->data){
        result = new SinglyLinkedListNode(head2->data);
        head2=head2->next;
    }
    else{
        result = new SinglyLinkedListNode(head1->data);
        head1=head1->next;
    }
    tail = result;
    while(head1&&head2){
        if(head1->data<=head2->data){
            tail->next = new SinglyLinkedListNode(head1->data);
            head1=head1->next;
        }
        else{
            tail->next = new SinglyLinkedListNode(head2->data);
            head2=head2->next;
        }
        tail = tail->next;
    }
    if(head1)
        tail->next = head1;
    else if(head2)
        tail->next = head2;
    return result;
}