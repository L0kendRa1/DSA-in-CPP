class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
        for(int i=0;i<=n-1;i++){
            bool covered=false;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(intervals[j][0]<=intervals[i][0] &&
                    intervals[j][1]>=intervals[i][1]){
                        if(intervals[j][0]==intervals[i][0] &&
                    intervals[j][1]==intervals[i][1]){
                        continue;
                    }
                    covered=true;
                    break;
                
                    }
                    
            }
            if(!covered){
                        count++;
                    }
        }
        return count;
    }
};