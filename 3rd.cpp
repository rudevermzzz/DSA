#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
int main(){
    node* first = new node{10, nullptr};
    node* second = new node{20, nullptr};
    node*third = new node{30, nullptr};
    node* fourth = new node{40, nullptr};

    first->next = second;
    second ->next = third;
    third ->next = fourth;
    cout<<"Before deletion";

    node* temp = first;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    node* todelete = second->next;
    second->next = todelete->next;
    delete todelete;
    cout<<"After deletion";
    temp = first;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    temp = first;
    while (temp != nullptr){
        node* nextnode = temp->next;
        delete temp;
        temp = nextnode;
    }
    return 0;
}