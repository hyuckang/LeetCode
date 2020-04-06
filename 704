class Solution {
public:
    int search(vector<int>& nums, int target)
    {    
        int left = 0, mid, right = nums.size() - 1;
        
        while(left <= right)
        {
            mid = (left + right) / 2;

            if(target < nums[mid]) right = mid - 1;         // 왼쪽에 있으면
            else if (target > nums[mid]) left = mid + 1;    // 오른쪽에 있으면
            else return mid;    // 찾았으면
        }
        return -1;
    }
};
