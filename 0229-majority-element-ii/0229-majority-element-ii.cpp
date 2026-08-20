class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int , int > mp;
        vector <int > vtr;
 
        int  n = nums.size();
        for(int x : nums){
            mp[x]++;
        }

        for(auto x : mp){
            if(x.second>n/3){
                vtr.push_back(x.first);
            }
        }
        return vtr;
    }
};