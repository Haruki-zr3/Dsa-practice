class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,n1=0,n2=0;
        n1=nums1.size();
        n2=nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        set<int> s1;
        vector<int> ans;

        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{
                s1.insert(nums2[j]);
                i++;
                j++;
            }
        }
        int m=0;
        for(auto it:s1){
            ans.push_back(it);
            m++;
        }
        return ans;
    }
};
