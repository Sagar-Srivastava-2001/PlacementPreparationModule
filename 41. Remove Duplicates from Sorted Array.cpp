class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0){
            return 0;
        }
        
        int ans = 1;
        int ch = nums[0];
        int k = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == ch){
                continue;
            }
            else{
                nums[k++] = nums[i];
                ch = nums[i];
            }
        }
        return k;
    }
};

