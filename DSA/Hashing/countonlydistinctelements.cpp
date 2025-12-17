// to count only the elements that occur only once in an array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    std::cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int countdistinct=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it :mpp){
        if(it.second==1){
            std::cout<<it.first;
        }
    }
    return 0;
}
