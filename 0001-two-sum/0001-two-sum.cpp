class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            int num = nums[i];
            int moreneeded = target-num;
            if(mpp.find(moreneeded)==mpp.end()){
                mpp[num] = i;
            }
            else{
                return{mpp[moreneeded],i};
            }
        }
        return{-1,-1};
    }
};