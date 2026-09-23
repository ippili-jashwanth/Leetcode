class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 1;
        int k ;
        while(fast<nums.size())
        { 
            if(slow==fast)fast++;
          if(nums[slow]==nums[fast] && slow!=fast)
          {
            nums.erase(nums.begin()+fast);
            
          }

          else{
          slow++;
          fast++;
          }
        }
        return nums.size();
    }
};