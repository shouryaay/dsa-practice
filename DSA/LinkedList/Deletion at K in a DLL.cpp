#include <iostream>
#include <vector>
using namespace std;
class node{
  public:
    int data;
    node* next;
    node* back;
  
  public:
    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    
  public:
    node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }
};
node* dlk(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->back=NULL;
        }
        delete temp;
        return head;
    }
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==k){
            node* temp1=temp;
            // node* prev=temp->back;
            // node* neext=temp->next;
            // prev->next=nexxt;
            // nexxt->back=prev; or
            temp->back->next=temp->next;
            if(temp->next!=NULL){
                temp->next->back=temp->back;
            }
            delete temp1;
            break;
        }
        temp=temp->next;
    }
    if(k>count){
        return head;
    }
    return head;
}
int main(){
    int n;
    std::cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    node* head = new node(v[0]);
    node* temp=head;
    for(int i=1;i<n;i++){
        node* temp1=new node(v[i]);
        temp1->back=temp;
        temp->next=temp1;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<"\n";
    int k;
    std::cin>>k;
    head=dlk(head,k);
    temp=head;
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
