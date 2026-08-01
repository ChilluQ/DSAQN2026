class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int ans=0;
        int maxi=0;
        for(auto x : mp){
            if(x.second>ans){
                ans=x.second;
                maxi=x.first;
            }
        }
        return maxi;
    }
};