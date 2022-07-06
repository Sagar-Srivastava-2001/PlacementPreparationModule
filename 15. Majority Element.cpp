class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maj_element = 0;
        
        for(auto x : nums){
            
            if(count == 0){
                maj_element = x;
            }
            
            if(maj_element == x){
                count++;
            }
            else{
                count--;
            }
        }
        
        return maj_element;
    }
};
