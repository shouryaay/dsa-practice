class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }
        map<int,int>mpp;
        for(int i=0;i<hand.size();i++){
            mpp[hand[i]]++;
        }
        int num=0;
        int x=0;
        for(auto it: mpp){
            int num=it.first;
            int x=it.second;
            if(x==0){
                continue;
            }
            for(int i=0;i<groupSize;i++){
                if(mpp.find(num+i)==mpp.end() || mpp[num+i]<x){
                    return false;
                }
                mpp[num+i]-=x;
            }
        }
        return true;
    }
};