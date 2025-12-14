#include <bits/stdc++.h>
using namespace std;
string countsort(string str){
vector<int> freq(26,0);
// to count the freq of elemnets
for(int i=0;i<str.length();i++){
    int index = str[i]-'a';
    freq[index]++;
}
// to sort acccordingly
int j=0;
for(int i=0;i<26;i++){
    while(freq[i]--){
        str[j++]=i+'a';
    }
}
    return str;
}
int main(){
    string s1;
    string s2;
    std::cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s1.length();i++){
        s2[i]=tolower(s2[i]);
    }
    s1=countsort(s1);
    s2=countsort(s2);
    bool isanagram=true;
    if(s1.length()!=s2.length()){
       isanagram=false;
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            isanagram=false;
            break;
        }
    }
    if(isanagram==true){
        std::cout<<"True";
    }
    else{
        std::cout<<"False";
    }
    return 0;
}
