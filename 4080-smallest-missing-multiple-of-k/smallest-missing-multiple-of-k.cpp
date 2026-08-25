class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=nums[i];
        }
        int x=1;
        while(true){
            if(mpp.find(k*x)==mpp.end()){
                return k*x;
            }
            x++;
        }
        return 0;
    }
};