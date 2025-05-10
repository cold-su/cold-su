class Solution {
public:
	bool
	findTarget(TreeNode* r, int t)
	{
		dfs(r);
		return twoSum(a, t).size();
	}
private:
	std::vector<int> a;

	void
	dfs(TreeNode* r)
	{
		if (!r) {
			return;
		}
		dfs(r->left);
		a.push_back(r->val);
		dfs(r->right);
	}

	std::vector<int> 
	twoSum(std::vector<int>& nums, int t) 
	{
		std::map<int, int> map;
		for (int i = 0; i < nums.size(); i++) {
			if (map.count(t - nums[i])) {
				return {map[t - nums[i]], i};
			}
			map[nums[i]] = i;
		}
		return {};
	}
};