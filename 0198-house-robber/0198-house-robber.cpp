class Solution {
public:
    int rob(vector<int>& nums) {
      int n=nums.size();
        
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        int prev2=0;
        int prev1=nums[0];
        int ans;
        for(int i=1; i<n; i++){
          int incl=prev2+nums[i];
          int excl=prev1+0;
          ans=max(incl,excl);
            prev2=prev1;
            prev1=ans;
        }
        return prev1;
    }
};