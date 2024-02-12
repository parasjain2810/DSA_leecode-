class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        int a=0;
        int b=1;
        while(b<n){
            if(nums[b]>nums[a]){
                a++;
                nums[a]=nums[b];
            }
            b++;
        }
        return a+1;
    }
};