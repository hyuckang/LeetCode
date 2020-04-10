class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        set<int> nums_set;
        int nums_sz = nums.size();

        for(int i=0; i<nums_sz; i++)
        {
            auto itr = nums_set.find(nums[i]);
            if(itr != nums_set.end())
            {
                return nums[i];
            }
            else nums_set.insert(nums[i]);
        }
        return -1;
    }
};
