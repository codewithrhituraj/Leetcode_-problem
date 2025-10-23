class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> vec(m+n, 0);
        int i=0;
        int j=0;
        int k=0;
        while(i<m and j<n){
            if(nums1[i]<nums2[j]){
                vec[k++]=nums1[i++];
            }
            else vec[k++]=nums2[j++];
        }
       
            while(j<n) vec[k++]=nums2[j++];
        
        
            while(i<m) vec[k++]=nums1[i++];
        

        for(int x=0;x<m+n;x++){
            nums1[x]=vec[x];
        }
        
    }
};