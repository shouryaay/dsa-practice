class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        int i=1;
        int threem=0;
        int fivem=0;
        int sevenm=0;
        unordered_set<int>st;
        while(threem<=n || fivem<=n || sevenm<=n){
            threem=3*i;
            fivem=5*i;
            sevenm=7*i;
            if(threem<=n){
                if(st.insert(3*i).second){
                    sum+=3*i;
                }
            }
            if(fivem<=n){
                if(st.insert(5*i).second){
                    sum+=5*i;
                }
            }
            if(sevenm<=n){
                if(st.insert(7*i).second){
                    sum+=7*i;
                }
            }
            i++;
        }
        return sum;
    }
};