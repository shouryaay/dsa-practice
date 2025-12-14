#include <bits/stdc++.h>
using namespace std;
int isochck(string str1, string str2){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    if(str1.length()!=str2.length()){
        return 0;
    }
    for(int i=0;i<str1.length();i++){
        str1[i]=tolower(str1[i]);
    }
    for(int i=0;i<str2.length();i++){
        str2[i]=tolower(str2[i]);
    }
    for(int i=0;i<str1.length();i++){
        if(v1[str1[i]]!=v2[str2[i]]){
            return false;
        }
        v1[str1[i]]=v2[str2[i]]=i;
    }
    return 1;
}
int main(){
    string s1,s2;
    std::cin>>s1>>s2;
    int r;
    r=isochck(s1,s2);
    if(r==0){
        std::cout<<"Not Isomorphic";
    }
    else {
        std::cout<<"Isomorphic";
    }
    return 0;
}
