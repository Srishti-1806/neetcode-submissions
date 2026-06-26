class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx= 0;
        for(int i=0; i<prices.size()-1; i++){
            int j=prices.size()-1;
            while(i<j){
                if((prices[j]-prices[i])<0){
                    continue;
                }else{
                    maxx=max(prices[j]-prices[i], maxx);
                    j--;
                }
            }
        }
        return maxx;
    }
};
