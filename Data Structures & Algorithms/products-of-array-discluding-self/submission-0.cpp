class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> vec;
        for(int i=0;i<nums.size(); i++){
            int prod=1;
            for(int j=0;j<i;j++){
                prod=prod*nums[j];
            }
            for(int k=i+1; k<nums.size();k++){
                prod=prod*nums[k];
            }
            vec.push_back(prod);
        }
        return vec;
    }
};
