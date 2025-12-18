#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector <int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    int n;
    std::cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    bubble_sort(arr);
    for(int i=0;i<n;i++){
        std::cout<< arr[i] <<" ";
    }
    return 0;
}
