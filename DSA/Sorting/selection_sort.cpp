#include <bits/stdc++.h>
using namespace std;
void selection_sort (vector<int>&arr){
    int n= arr.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main (){
    int n;
    std::cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    selection_sort(arr);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
