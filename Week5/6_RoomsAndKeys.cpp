class Solution {
public:
    void bfs(vector<vector<int>>& rooms,vector<int> &vis)
    {
        int start=0;
        vis[0]=1;
        queue<int> q;
        q.push(0);

        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(auto num: rooms[node])
            {
                if(!vis[num])
                {
                    vis[num]=1;
                    q.push(num);
                }
            }

        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(),0);
        vector<vector<int>> sample=rooms;
        bfs(sample,vis);

        for(int i=0; i<vis.size(); i++)
        {
            if(!vis[i]) return false;
        }

        return true;
    }
};
