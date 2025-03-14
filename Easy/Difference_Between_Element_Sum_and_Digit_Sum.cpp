class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum =0 ;
        int digitsum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum+nums[i];
            int digit = nums[i];
            while(digit > 0)
            {
                digitsum = digitsum + digit%10;
                digit = digit/10;
            }
        }
        return sum-digitsum;
    }
};
