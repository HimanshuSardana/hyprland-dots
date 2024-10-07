#include <iostream>

using namespace std;

struct Node {
        int data;
        Node* next;
};

int main() {
        Node* head = new Node();
        head->data = 1;
        
        Node *second = new Node();
        second->data = 2;

        Node* third = new Node();
        third->data = 3;
        third->next = NULL;
        second->next = third;


        head->next = second;

        Node *temp = new Node();
        temp = head;
        while(temp!=NULL) {
                cout << temp->data << endl;
                temp = temp->next;
        }

        return 0;
}
