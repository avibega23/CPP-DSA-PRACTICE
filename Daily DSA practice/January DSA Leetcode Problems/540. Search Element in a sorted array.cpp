class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        else if(n==1) return nums[0];
        else if(nums[n-1]!=nums[n-2])
        {
            return nums[n-1];
        }
        else if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        else
        {
            int low = 1;
            int high = n-1;
            while(low<=high)
            {
                int mid = low + (high-low)/2;

                if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])
                {
                    return nums[mid];
                }
                if(mid%2==0)
                {
                    if(nums[mid]==nums[mid+1])
                    {
                        low = mid+1;
                    }
                    else
                    {
                        high = mid-1;
                    }
                }
                else
                {
                    if(nums[mid]==nums[mid+1])
                    {
                        high = mid-1;
                    }
                    else
                    {
                        low = mid+1;
                    }
                }
            }
        }
        return 0;
    }
};