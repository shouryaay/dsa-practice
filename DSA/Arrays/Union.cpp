// union of two arrays 
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        int i=0;
        int j=0;
        vector <int> res;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                if(res.empty() || a[i]!=res.back()){
                    res.push_back(a[i]);
                }
                i++;
            }
            else if(a[i]==b[j]){
                if(res.empty() || a[i]!=res.back()){
                    res.push_back(a[i]);
                }
                i++;
                j++;
            }
            else{
                if(res.empty() || res.back() != b[j])
                    res.push_back(b[j]);
                j++;
            }

        }
        while(j<n2){
            if(res.empty() || b[j]!=res.back()){
                res.push_back(b[j]);
            }
            j++;
        }
        while(i<n1){
            if(res.empty() || a[i]!=res.back()){
                res.push_back(a[i]);
            }
            i++;
        }
        return res;
    }
};
