class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int>ans;
        while(j>i){
            int summ= numbers[i]+numbers[j];
            if(j>i && summ>target){
                j--;
            }else if(j>i && summ<target){
                i++;
            }else{
                return {i + 1, j + 1}; 
            }
        }
        return {};
    }
};
