#include<bits/stdc++.h>
using pp = pair<int,pair<int,int>>;
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    
    for(int i=0;i<k;i++){
        pq.push({kArrays[i][0], {i, 0}});
    }
    
    vector<int> ans;
    
    while(!pq.empty()){
        int element = pq.top().first;
        int array_no = pq.top().second.first;
        int array_idx = pq.top().second.second;
        
        pq.pop();
        ans.push_back(element);
        
        if(array_idx + 1 < kArrays[array_no].size()){
            pq.push({kArrays[array_no][array_idx+1], {array_no, array_idx+1}});
        }
    }
    return ans;
}
