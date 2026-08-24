class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mpp;
        int temp=n;
        int sqsum=0;
        while(sqsum!=1){
            sqsum=0;
            while(temp!=0){
                sqsum+=(temp%10)*(temp%10);
                temp=temp/10;
            }
            if(mpp.find(sqsum)!=mpp.end()){
                return false;
            }
            mpp[sqsum]=1;
            temp=sqsum;
        }
        return true;
    }
};