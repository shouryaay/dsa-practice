#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
        node(int data1,node* next1){
            data=data1;
            next=next1;
        }
        node(int data1){
            data=data1;
            next=NULL;
        }
        node(){
            data=0;
            next=NULL;
        }
};
class stack{
    public:
        int top=-1;
        node* head=NULL;
        void push(int x){
            node* temp=new node(x);
            temp->next=head;
            head=temp;
            top++;
        }
        void pop(){
            if(top==-1){
                std::cout<<"Underflow\n";
                return;
            }
            node* temp=head;
            head=head->next;
            delete temp;
            top--;
        }
        int peek(){
            if(top==-1){
                return -1;
            }
            return head->data;
        }
        int size(){
            return top+1;
        }
};
int main(){
    return 0;
}
