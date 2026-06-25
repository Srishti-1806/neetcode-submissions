class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int summ=0;
        int k=0;
        int j=nums.size()-1;
        vector<pair<int, int>>vec;
        for(int i=0;i<nums.size(); i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(), vec.end());
        while(j>k){
            summ=vec[k].first +vec[j].first;
            if((summ)==target){
                return {min(vec[k].second,vec[j].second), max(vec[k].second,vec[j].second)};
            }else if(summ > target){
                j--;
            }else{
                k++;
            }
        }
        return {};
    }
};
