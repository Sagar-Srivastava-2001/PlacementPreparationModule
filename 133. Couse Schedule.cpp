class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto x : prerequisites){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
        }
        
        queue<int> q;
        vector<int> indegree(numCourses,0);
        
        for(int i=0;i<numCourses;i++){
            for(auto nbr : adj[i]){
                indegree[nbr]++;
            }
        }
        
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it : adj[node]){
                indegree[it]--;

                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        
        return topo.size() == numCourses;
    }
};
