class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        // if(m==0)
        // { 
        // nums1.assign(nums2.begin(),nums2.end());
        // return ;
        // }
        while(i>=0 && j >=0)
        {
            if(nums1[i] >= nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        while(j>=0)
        {
            nums1[k]=nums2[j];
            j--;
            k--;
        }
        
         
    }
};