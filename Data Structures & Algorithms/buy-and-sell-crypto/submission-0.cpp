class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>pre(n,0);
        vector<int>post(n,0);
        int minm=INT_MAX;
        for(int i=0;i<n;i++){
            minm=min(minm,prices[i]);
            pre[i]=minm;
        }
        int maxm=0;
        for(int i=n-1;i>=0;i--){
            maxm=max(maxm,prices[i]);
            post[i]=maxm;
        }
        int final=0;
        for(int i=0;i<n;i++){
            final=max(final,post[i]-pre[i]);
        }
        return final;
    }
};
