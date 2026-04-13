class StockSpanner {
public:
    vector <int>v;
    stack<pair<int,int>> stk;
    int idx=-1;
    StockSpanner() {
        idx=-1;
        stk=stack<pair<int,int>>();
    }
    int next(int price) {
        idx++;
        while(!stk.empty() && stk.top().first<=price){
            stk.pop();
        }
        int ans=idx-(stk.empty()?-1:stk.top().second);
        stk.push({price,idx});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
