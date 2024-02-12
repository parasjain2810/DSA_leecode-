class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        int max=nums.size()/2;
        int ans=-1;
        for(auto i:count){
            if(max<i.second){
                max=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};