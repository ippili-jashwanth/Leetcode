class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()==1) return {-1} ;
        unordered_map<int , int > mp;
        int j = 0 ;
        for(int i =0; i < nums2.size()-1; i++)
        {
            stack<int>ms;
             j = i+1;
            while(j<nums2.size() && j >i)
            {
                if(nums2[i] < nums2[j] && ms.empty())
                ms.push(nums2[j]);
                j++;
            }
            if(ms.empty()) mp[nums2[i]]= -1;
             else mp[nums2[i]]=ms.top();
               
        }
        int size = nums2[j-1];
        mp[size]=-1;
        vector<int>v;
        for(int i : nums1)
        {
          
         v.push_back(mp[i]);
        }
        return v;
    }
};