class Solution {
public:
    void sortColors(vector<int>& arr) {
        int i = 0;
        int j = 0;
        int k = arr.size()-1;
        
        while(i<=k){
            if(arr[i]==1){
                i++;
            }
            else if(arr[i]==2){
                swap(arr[i],arr[k]);
                k--;
            }
            else{
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
        }
    }
};
