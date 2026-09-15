class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>res;
        for(int i=0;i<k;i++){
            int max=0;
            int ele=0;
            for(auto it:mpp){
                if(it.second>max){
                    max=it.second;
                    ele=it.first;
                }
            }
            res.push_back(ele);
            mpp.erase(ele);
        }
        return res;
    }
};