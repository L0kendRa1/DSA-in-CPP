class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0ll);
        int ans=low;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=1;
            int sum=0;
            for(int i=0;i<=n-1;i++){
                if(sum+nums[i]<=mid){
                    sum+=nums[i];
                }
                else{
                    count++;
                    sum=nums[i];
                }
            }
            if(count<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};