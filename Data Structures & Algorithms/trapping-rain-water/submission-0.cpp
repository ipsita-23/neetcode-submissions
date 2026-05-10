class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pre(n,0);
        vector<int>post(n,0);
        int maxm1=0;
        int maxm2=0;
        for(int i=1;i<n;i++){
            maxm1=max(maxm1,height[i-1]);
            pre[i]=maxm1;

        }
        for(int i=n-2;i>=0;i--){
            maxm2=max(maxm2,height[i+1]);
            post[i]=maxm2;
        }
        int total=0;
        for(int i=0;i<n;i++){
            int water=min(pre[i],post[i])-height[i];
            if(water>0)total+=water;

        }
        return total;
    }
};
