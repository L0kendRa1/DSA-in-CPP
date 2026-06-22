class Solution {
public:
    bool isAlphaNumeric(char ch){
        return (ch>='a' && ch<='z' ||
                ch>='A' && ch<='Z' ||
                ch>='0' && ch<='9');
    }
    bool isPalindrome(string s) {
        int n=0;
        int e=s.length()-1;
        while(n<e){
            if(!isAlphaNumeric(s[n])){
                n++;
                continue;
            }
            if(!isAlphaNumeric(s[e])){
                e--;
                continue;
            }
            if(tolower(s[n])!=tolower(s[e])){
                return false;
            }
            n++;
            e--;
        }
        return true;
    }
};