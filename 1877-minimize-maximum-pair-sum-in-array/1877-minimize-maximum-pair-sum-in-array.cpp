class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        vector<int>temp;
        for(int i=0;i<=(n/2)-1;i++){
            
                int sum=nums[i]+nums[n-i-1];
                temp.push_back(sum);
            
        }
        int ans=*max_element(temp.begin(),temp.end());
        return ans;
        
        
    }
};