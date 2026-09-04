class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        int i=1;
        int threem=0;
        int fivem=0;
        int sevenm=0;
        unordered_map<int,int>mpp;
        while(threem<=n || fivem<=n || sevenm<=n){
            threem=3*i;
            fivem=5*i;
            sevenm=7*i;
            if(threem<=n){
                if(mpp.find(3*i)==mpp.end()){
                    sum+=3*i;
                    mpp[3*i]=1;
                }
            }
            if(fivem<=n){
                if(mpp.find(5*i)==mpp.end()){
                    sum+=5*i;
                    mpp[5*i]=1;
                }
            }
            if(sevenm<=n){
                if(mpp.find(7*i)==mpp.end()){
                    sum+=7*i;
                    mpp[7*i]=1;
                }
            }
            i++;
        }
        return sum;
    }
};