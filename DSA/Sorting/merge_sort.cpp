#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&v,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=high){
        if(v[i]<=v[j]){
            temp.push_back(v[i]);
            i++;
        }
        else{
            temp.push_back(v[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(v[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}
void ms(vector<int>&v,int low,int high){
    if(low>=high){return;}
    int mid=(low+high)/2;
    ms(v,low,mid);
    ms(v,mid+1,high);
    merge(v,low,mid,high);
}
int main(){
    int n ;
    std::cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<"\n";
    ms(v,0,n-1);
    for(int i=0;i<n;i++){
        std::cout<<v[i]<<" ";
    }
    return 0;
}
