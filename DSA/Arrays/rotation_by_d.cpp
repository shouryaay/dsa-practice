//This program left rotates the given array of size n by d places
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int d;
    std::cin>>d;
    d=d%n;
    for(int i=0;i<d;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    
    return 0;
}
