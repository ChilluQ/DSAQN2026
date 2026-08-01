class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int x : nums){
            mp[x]++;   /// 3-2 , 2-1
        }
        int high=0;
        int ans=0; 
        for(auto x : mp){
            if(x.second>high) {
                high=x.second;
                ans=x.first;
            }
        }

        return ans;
    }
};