class StockSpanner {
public:
    vector<int>prices;
    stack<int>s;
    vector<int>ans;
    StockSpanner() {
        
    }
    
    int next(int price) {
        prices.push_back(price);
        int i=prices.size()-1;
            while(s.size()>0 && prices[s.top()]<=prices[i]){
                s.pop();
            }

            if(s.size()==0){
                ans.push_back(i+1);
            }
            else {
                ans.push_back(i-s.top());
            }
            s.push(i);
        return ans.back();
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */