class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {}; 
        
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
        int num=nums[i];
        int more=target-num;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[num]=i;
    }
    return {-1,-1};
    }
};