class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        //counting freq of chars
        unordered_map<char,int>mpp;
        for(int i=0;i<tasks.size();i++){
            mpp[tasks[i]]++;
        }

        //pushing the freq onto heap
        priority_queue<int>maxheap;
        for(auto it: mpp){
            maxheap.push(it.second);
        }
        int time=0;
        while(!maxheap.empty()){
            vector<int>temp;
            for(int i=0;i<n+1;i++){
                if(!maxheap.empty()){
                    int x=maxheap.top();
                    maxheap.pop();
                    temp.push_back(x);
                }
            }
            for(int i=0;i<temp.size();i++){ 
                temp[i]--;
                if(temp[i]>0){
                    maxheap.push(temp[i]);
                }
            }
            if(maxheap.empty()){
                time+=temp.size();
            }
            else{
                time+=n+1;
            }
        }
        return time;
    }
};