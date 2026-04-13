#include <iostream>
using namespace std;
class queue{
    int start=0;
    int rear=-1;
    int arr[100];
    int cap=100;
  public:
    void push(int x){
        if(size()==cap){
            return;
        }
        if(rear==-1){
            start= 0;
        }
        rear=(rear+1)%cap;
        arr[rear]=x;
    }
    void pop(){
        if(rear==-1){
            return;
        }
        if(start == rear){
            start=0;
            rear=-1;
        }
        else{
        start=(start+1)%cap;
        }
    }
    int size(){
        if(rear==-1){
            return 0;
        }
        return (rear-start+cap)%cap+1;
    }
    int peek(){
        if(rear==-1){
            return -1;
        }
        return arr[start];
    }
    void display(){
        if(rear==-1){
            return;
        }
        int i= start;
        while(true){
            std::cout<<arr[i]<<" ";
            if(i==rear){
                break;
            }
            i=(i+1)%cap;
        }
    }
};
int main(){
    int n;
    cin>>n;
    queue s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<s.peek()<<" ";
    s.pop();
    cout<<s.peek()<<"\n";
    s.display();
    return 0;
}
