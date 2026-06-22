class Solution {
public:
    void reverseString(vector<char>& s) {
        int str=0;
        int e=s.size() -1;
        while(str<=e){
            for(int i=0;i<=e;i++){
                swap(s[str],s[e]);
                str++;
                e--;
            }
        }
    }
};