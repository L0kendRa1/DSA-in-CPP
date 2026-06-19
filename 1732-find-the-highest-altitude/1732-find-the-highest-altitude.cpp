class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>temp(n+1);
        for(int i=0;i<=n;i++){
            temp[0]=0;
            if(i!=0){
                temp[i]=temp[i-1]+gain[i-1];
            }
        }
        int maxi=*max_element(temp.begin(),temp.end());
        return maxi;

    }
};