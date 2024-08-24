class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> v;
        for (int i = 0; i < grid[0].size(); i++) {
            size_t pos{};
            int max = 0;
            for (int j = 0; j < grid.size(); j++) {
                string t = to_string(grid[j][i]);
                std::stoi(t, &pos);
                if (max < pos) max = pos;
            }
            v.push_back(max);
        }
        return v;
    }
};