//This program calculates prefix from a set of array of strings
#include <bits/stdc++.h>
using namespace std;
string prefix(vector<string> &str) {
	sort(str.begin(),str.end());
	string r="";
	string si=*str.begin();
	string sl=*(str.end()-1);
	for(int i=0; i<str.size(); i++) {
		if(si[i]==sl[i]) {
			r+=si[i];
		}
	}
	return r;
}
int main() {
	int n;
	cin>>n;
	vector<string>stri(n);
	for(int i=0; i<n; i++) {
		cin>>stri[i];
	}
	string r;
	r=prefix(stri);
	std::cout<<r;
	return 0;
}
