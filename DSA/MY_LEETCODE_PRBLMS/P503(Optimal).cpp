class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>stk;
        for(int i=2*n-1;i>=0;i--){
            int num=nums[i%n];
            while(!stk.empty() && stk.top()<=num){
                stk.pop();
            }
            if(i<n){
                if(!stk.empty()){
                    ans[i]=stk.top();
                }
            }
            stk.push(num);
        }
        return ans;
    }
};
