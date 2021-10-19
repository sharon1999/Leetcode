class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        map <int,int> mp;
        for(int i = 0;i < nums.size();i++){
            if(mp.find(target-nums[i]) != mp.end() && i != mp.find(target-nums[i])->second)
            {  
                ans.push_back(i);
                ans.push_back(mp.find(target-nums[i])->second);
                return ans;
            }
            mp[nums[i]]=i;
        }
         return ans;
    }
};