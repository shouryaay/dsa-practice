int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack <int> s1;
    stack <int> s2;
    stack<int> s3;
    int sum=0;
    for(int i=h1.size()-1;i>=0;i--){
        sum=sum+h1[i];
        s1.push(sum);
    }
    sum=0;
    for(int i=h2.size()-1;i>=0;i--){
        sum=sum+h2[i];
        s2.push(sum);
    }
    sum=0;
    for(int i=h3.size()-1;i>=0;i--){
        sum=sum+h3[i];
        s3.push(sum);
    }
    while(!(s1.empty() || s2.empty() || s3.empty())){
        if(s1.top()==s2.top() && s2.top()==s3.top()){
            return s1.top();
        }
        if(s1.top()>=s2.top() && s1.top()>=s3.top()){
            s1.pop();
        }
        else if(s2.top()>=s1.top() && s2.top()>=s3.top()){
            s2.pop();
        }
        else{
            s3.pop();
        }
    }
    return 0;
}
