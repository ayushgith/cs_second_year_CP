class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int> ans;
       unordered_map<int, int> baalti;
    for (int i=0;i<nums.size();i++){
        if(baalti.count(t-nums[i])!=0){
            ans.push_back(i);
            ans.push_back(baalti[t-nums[i]]);
            return ans;
        }else{
        baalti[nums[i]]=i;
      }
        }
        return ans;
        }
};
