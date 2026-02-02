// largest subarray with zero sum
class Solution {
  public:
    int maxLength(vector<int>& arr) {
    int n = arr.size();
    if(n==0){
        return 0;
    }
    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        int len=1;
        if(arr[i] == 0) maxlen = max(maxlen, 1);
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            len++;
            if(sum==0){
                maxlen=max(len,maxlen);
            }
        }
    }
    return maxlen;
    }
};
