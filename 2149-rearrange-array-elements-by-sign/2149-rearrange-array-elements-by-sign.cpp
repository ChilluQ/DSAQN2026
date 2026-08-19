class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int > vtrp;
        vector <int > vtrn;
        vector <int > vtrj;
        int start=0;
        int end = nums.size()-1;
        while(start<=end){
            if(nums[start]>0){
                vtrp.push_back(nums[start]);
            }
                start++;

        }
        start=0;
        
        while(start<=end){
            if(nums[start]<0){
                vtrn.push_back(nums[start]);
            }
            start++;

        }

        for(int i =0 ; i<vtrp.size() ; i++){
            vtrj.push_back(vtrp[i]);
            vtrj.push_back(vtrn[i]);
        }

        return vtrj;

    }
};