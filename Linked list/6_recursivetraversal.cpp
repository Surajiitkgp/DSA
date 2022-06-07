#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void rprint(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rprint(head->next);

}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    rprint(head);
    return 0;
}