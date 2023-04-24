class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n = stones.size();
        for(int i=0; i<n; i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size() > 1)
        {
            int N = pq.size();
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y-x != 0)
            {
                pq.push(y-x);
            }
            else if(y-x ==0 and N ==2)
            {
                pq.push(0);
            }
        }  
        return pq.top();
    }
};