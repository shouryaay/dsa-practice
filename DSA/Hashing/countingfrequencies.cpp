// calculating frequency of elements in an array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    // counts frequency
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // frequency of element
    int f;
    std::cin>>f;
    std::cout<<mpp[f];
    return 0;
}
