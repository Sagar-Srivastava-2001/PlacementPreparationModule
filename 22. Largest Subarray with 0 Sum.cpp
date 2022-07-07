class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        map<int,int>m;  // (sum,index)
    	int i=-1;
    	int sum = 0;
    	m.insert(make_pair(sum,i));
    	int max_len = 0;
    
    	while(i<n-1){
    		i++;
    		sum += arr[i];
    
    		if(m.find(sum) != m.end()){
    			int len = i - m[sum];
    			max_len = max(max_len,len);
    		}
    		else{
    			m.insert(make_pair(sum,i));
    		}
    	}
    	return max_len;
    }
};
