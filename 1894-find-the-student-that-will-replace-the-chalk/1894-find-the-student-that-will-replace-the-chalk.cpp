class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long total=accumulate(chalk.begin(),chalk.end(),0ll);
        k=k%total;
        for(int i=0;i<=n-1;i++){
            
            if(k<chalk[i]){
                return i;
            }
            else {
                k=k-chalk[i];
                }
        }
        return 0;
        
    }
};