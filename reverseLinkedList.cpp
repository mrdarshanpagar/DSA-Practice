#include<iostream>
using namespace std ;

class node{
    public:

    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

node* recursiveReverse(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newHead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

node* reverseList(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        
    }

    return prevptr;
}

void display(node* head){

    node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int main(){

    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    display(head);

    node* newHead = recursiveReverse(head);
    display(newHead);
    return 0;
}