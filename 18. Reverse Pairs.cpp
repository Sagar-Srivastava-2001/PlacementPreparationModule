class Solution { 
public:
int merge(vector<int>&nums,int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int count=0;
    for(int i=low;i<=mid;i++)
    {
        while(j<=high && (float)nums[i]/2.0 >nums[j])
        {
            j++;
        }
        count+=(j-(mid+1));
    }
    i=low;
    int k=low;
    j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=high)
    {
        if(nums[i]<nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    for(;i<=mid;i++)
    {
       temp.push_back(nums[i]);
    }
    for(;j<=high;j++)
    {
        temp.push_back(nums[j]);
    }
    for(int i=low;i<=high;i++)
    {
        nums[i]=temp[i-low];
    }
    return count;
}
int mergeSort(vector<int>&nums,int low,int high){
    if(low>=high)return 0;
    
        int mid=(low+high)/2;
        int revPairs=mergeSort(nums,low,mid);
        revPairs+=mergeSort(nums,mid+1,high);
        revPairs+=merge(nums,low,mid,high);
        return revPairs;
}
int reversePairs(vector<int>& nums) {
    int n=nums.size();
    
    int count=mergeSort(nums,0,n-1);

    return count;
}
};
