class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        string str2="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                char x=tolower(s[i]);
                str2+=x;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(isalnum(s[i])){
                char x=tolower(s[i]);
                str+=x;
            } 

        }
        if(str==str2)return true;
        return false;
    }
};
