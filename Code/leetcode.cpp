class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n + 1, 0);
        vector<int> outDegree(n + 1, 0);
        for (int i = 0; i < trust.size(); i++) {
            int in = trust[i][1];
            int out = trust[i][0];

            inDegree[in]++;
            outDegree[out]++;
        }
        for (int i = 1; i < n + 1; i++) {
            if (inDegree[i] == n - 1 && outDegree[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};