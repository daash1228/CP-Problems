class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int low=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int upper=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(binary_search(nums.begin(),nums.end(),target)==false)
        {
            ans.push_back((-1));
            ans.push_back((-1));
            return ans;
        }
        else
        {
            ans.push_back(low);
            ans.push_back(upper-1);
            return ans;
        }
    }
};
