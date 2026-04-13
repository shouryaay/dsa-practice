#include <iostream>
using namespace std;
int arr[100];
int top=-1;
class stack{
    public:
        void push(int x){
            if(top==99){
                return;
            }
            top++;
            arr[top]=x;
        }
        void pop(){
            if(top==0){
                return;
            }
            top--;
        }
        int peek(){
            return arr[top];
        }
        int size(){
            return top+1;
        }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack s;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=s.peek();
        s.pop();
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
