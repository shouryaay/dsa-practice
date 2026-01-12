//the idea was to create another array and add elements in accordance to k to generate the desired rotated output
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k=k%n;
    vector<int> nums1;
        for(int i=n-k;i<n;i++){
            nums1.push_back(nums[i]);
        }
        for(int j=0;j<n-k;j++){
            nums1.push_back(nums[j]);
        }
        nums.clear();
        for(int i=0;i<n;i++){
            nums.push_back(nums1[i]);
        }
    }

};
