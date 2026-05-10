class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int ans=0;
        int maxm=0,i=0;
        for(int j=0;j<s.length();j++){
            freq[s[j]-'A']++;
            maxm=max(maxm,freq[s[j]-'A']);
            while((j-i+1)-maxm>k){
                freq[s[i]-'A']--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
