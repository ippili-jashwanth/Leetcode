class Solution {
public:
    int findMin(vector<int>& nums) {
        // int k = *min_element(nums.begin(),nums.end());
        // return k;
        if(nums.size()==1)return nums[0];
        int left = 0;
        int right = nums.size()-1;
        int k = INT_MAX;
        while(left<right)
        {
            int mid = left+ (right-left)/2;
             k = min(k,nums[mid]);
            if( nums[mid] >  nums[right] )
            {
                left = mid+1;
            }
            else 
            {
              right = mid;  
            }

        }
        return nums[left];
        
    }
};