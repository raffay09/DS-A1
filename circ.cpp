#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

class CLL{
    node *head;
    node *tail;
    public:

    CLL(){
        head = tail = NULL;
    }

    void insertatfront(int val){
        node *newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }else{
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    void insertatend(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = tail  = newnode;
            tail->next = head;
        }else{
            newnode->next = head;
            tail->next = newnode;
            tail = newnode;
            // tail->next = head;
        }
    }
void display(){
    if(head == NULL){
        return;
    }

    cout << head->data << " -> ";
    node *temp = head->next;
    while(temp != head){
        cout << temp->data << " -> ";
        temp =temp->next;
    }

    cout << temp->data << " -> ";
}

};

int main(){
    CLL c1;
    c1.insertatend(1);
    c1.insertatend(2);
    c1.insertatend(3);
    c1.display();
}

