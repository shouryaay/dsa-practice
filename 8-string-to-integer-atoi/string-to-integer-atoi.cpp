class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        int num=0;
        int sign=1;
        while(i<n && s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(i<n && isdigit(s[i])){
            int digit=(s[i]-'0');
            if(num==INT_MAX/10){
                if(sign==1){
                    if(digit>=7){
                        return INT_MAX;
                    }
                }
                else if(sign==-1){
                    if(digit>=8){
                        return INT_MIN;
                    }
                }
            }
            if(num>INT_MAX/10){
                if(sign==1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            num=num*10+digit;
            i++;
        }
        return sign*num;
    }
};