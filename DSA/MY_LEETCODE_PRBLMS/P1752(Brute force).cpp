
class Solution {
public:
	bool sort_check(vector<int>& nums) {
		for(int i=0; i<nums.size()-1; i++) {
			if(nums[i]>nums[i+1]) {
				return false;
			}
		}
		return true;
	}
	bool check(vector<int>& nums) {
		if(sort_check(nums)==true) {
			return true;
		}
		else {
			for(int i=0; i<nums.size()-1; i++) {
				int temp=nums[0];
				for(int j=0; j<nums.size()-1; j++) {
					nums[j]=nums[j+1];
				}
				nums[nums.size()-1]=temp;
				if(sort_check(nums)==true) {
					return true;
				}
			}
		}
		return false;
	}
};
