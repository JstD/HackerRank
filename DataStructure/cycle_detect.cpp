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

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    vector<SinglyLinkedListNode*> save;
    int num = 0;
    while(head){
        for(int i=0;i<num;i++)
            if(head==save[i])
                return true;
        save.push_back(head);
        num++;
        head=head->next;
    }
    return false;
}
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head){
        SinglyLinkedListNode * temp = head;
        while(temp->next)
            temp = temp->next;
        temp->next = new SinglyLinkedListNode(data);
        return head;
    }
    else{
        return new SinglyLinkedListNode(data);
    }
}
int main(){
    SinglyLinkedListNode* head = insertNodeAtTail(nullptr,1);
    head = insertNodeAtTail(head,2);
    head = insertNodeAtTail(head,3);
    head = insertNodeAtTail(head,1);


    cout<<has_cycle(head);
}