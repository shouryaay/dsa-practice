class Solution {
public:
    vector<int> Squares(vector<int>& nums) {
        transform(nums.begin(),nums.end(),nums.begin(),[](int &x){
            return x*x;
        });
        return nums;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res=Squares(nums);
        sort(res.begin(),res.end());
        return res;
    }
};