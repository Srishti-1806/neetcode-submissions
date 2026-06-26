class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx= INT_MIN;
        for(int i=0;i<heights.size()-1; i++){
            int j=heights.size()-1;
            while(j>i){
                if(((min(heights[i], heights[j]))*(j-i))>=maxx){
                    maxx=((min(heights[i], heights[j]))*(j-i));
                    j--;
                }else{
                    j--;
                    continue;
                }
                j--;
        }
        }
        return maxx;
    }
};
