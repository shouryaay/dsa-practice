class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int hash[3]={0};
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                hash[0]++;
            }
            else if(bills[i]==10){
                if(hash[0]==0){
                    return false;
                }
                hash[0]--;
                hash[1]++;
            }
            else{
                if(hash[0]>=1 && hash[1]>=1){
                    hash[0]--;
                    hash[1]--;
                }
                else if(hash[0]>=3){
                    for(int i=0;i<3;i++){
                        hash[0]--;
                    }
                }
                else{
                    return false;
                }
                hash[2]++;
            }
        }
        return true;
    }
};