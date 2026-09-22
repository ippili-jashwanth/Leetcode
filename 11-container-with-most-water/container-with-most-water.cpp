class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int s = 0;
        while(left<=right)
        {
            int num =min( height[left], height[right]);
            s = max(s, num*(right-left));
            if(num==height[left]) left++;
            else right--;

        }
        return s;
    }
};