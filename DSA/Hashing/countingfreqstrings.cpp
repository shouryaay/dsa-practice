#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    std::cin>>str;
    unordered_map<char,int>mpp;
    for(int i=0;i<str.length();i++){
        mpp[str[i]]++;
    }
    char freq;
    std::cin>>freq;
    std::cout<<mpp[freq];
    return 0;
}
