class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int i =0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        if(nums.size() == mpp.size()){
            return false;
        }
        return true;
    }
};