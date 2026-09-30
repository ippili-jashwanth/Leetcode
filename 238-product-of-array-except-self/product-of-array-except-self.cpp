class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>left;
      left.push_back(1);
      vector<int>right;
      for(int i = 1; i<nums.size(); i++)
      {
         int sum =left[i-1]*nums[i-1];
         left.push_back(sum);
      }
      right.push_back(1);
      for(int i = nums.size()-2; i >=0 ;i--)
      {
        int sum = right[0]*nums[i+1];
        right.insert(right.begin(),sum);
      }
      for(int i = 0 ; i < nums.size(); i++)
      {
        left[i]*=right[i];
      }
      return  left;


    }
};