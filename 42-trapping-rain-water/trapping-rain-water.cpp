class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right =height.size()-1;
        int left_max = height[0];
        int right_max = height[right];
        int sum =0 ;
        while(left<right)
        {
            left_max = max(left_max,height[left]);
            right_max = max(right_max,height[right]);
           if(left_max<=right_max)
           {
              sum+= left_max-height[left];
              left++;
           }
           else
           {
            sum+=right_max-height[right];
            right--;
           }
        }
        return sum;
    }
};