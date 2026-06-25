class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int>mpp;
        std::map<char, int>mmp;
        for(auto it: s){
            mpp[it]++;
        }
        for(auto it: t){
            mmp[it]++;
        }
        if(mmp.size()!=mpp.size()){
            return false;
        }else if(mpp != mmp){
            return false;
        }else{
        return true;
        }
        return false;
    }
};
