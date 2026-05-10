class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int size=n;
        int area=0;
        while(l<r){
            int x=min(heights[l],heights[r]);
            area=max((r-l)*x,area);
            if(x==heights[l]){
                l++;
            }
            else{
                r--;
            }
            

        }
        return area;
    }
};
