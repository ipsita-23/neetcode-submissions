class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>u;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
            while(l<r){
                if(nums[i]==-(nums[l]+nums[r]) && i!=l && r!=i){
                    u.insert({nums[i],nums[l],nums[r]});
                    r--;
                    l++;
                }
                else if(nums[i]+nums[l]+nums[r] > 0){
                    r--;
                }
                else{
                    l++;
                }

            }
        }
        for(auto& x:u){
            ans.push_back(x);
        }
        return ans;
    }
};
