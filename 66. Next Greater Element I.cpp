class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int>v(nums2.size(),0);
        stack<int>s;
        
        s.push(0);
        for(int i=1;i<nums2.size();i++){
            while(s.size()>0 and nums2[i] > nums2[s.top()]){
                int pos = s.top();
                v[pos] = nums2[i];
                s.pop();
            }
            s.push(i);
        }
        
        while(s.size()>0){
            int pos = s.top();
            v[pos] = -1;
            s.pop();
        }
        
        return v;
    }
};
