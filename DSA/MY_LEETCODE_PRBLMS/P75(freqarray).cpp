//made an freq array and overwrited the given array using the count of freq
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector <int> freq(3,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int k=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<freq[i];j++){
                nums[k++]=i;
            }
        }
    }
};
