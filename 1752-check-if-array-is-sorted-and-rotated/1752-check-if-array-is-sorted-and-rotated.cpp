class Solution {
public:
    bool check(vector<int>& arr) {
        int count=0;
        int end=arr.size()-1;
        for(int i =0 ; i<arr.size()-1; i++){
            if(arr[i]>arr[i+1]){
                count++;
            }
        }

        if(arr[end]>arr[0]){
            count++;
        }

        if(count<=1){
            return true;
        }
        return false;
    }

};