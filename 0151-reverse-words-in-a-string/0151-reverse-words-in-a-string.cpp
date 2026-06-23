class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n=s.size();
        int i=0;
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            while(i<n && s[i]!=' '){
                ans.push_back(s[i]);
                i++;
            }
            while(i<n && s[i]==' '){
                i++;
            }
            if(i<n){
                ans.push_back(' ');
            }
        }
        
        
        reverse(ans.begin(),ans.end());
        int start=0;
        int m=ans.size();
        for(int i=0;i<=m;i++){
            if(i==m ||ans[i]==' '){
                reverse(ans.begin()+start,ans.begin()+i);
                start=i+1;
            }
        }
        return ans;
    }
};