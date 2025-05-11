/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution {
public:
	using Grid = std::vector<std::vector<int>>;

	Node*
	construct(std::vector<std::vector<int>>& grid)
	{
		int n = grid.size();
		auto count = [&](Grid& g) -> std::pair<bool, int> {
			int f[2] {};
			for (auto& x : g) {
				for (int _x : x) {
					f[_x]++;
				}
			}
			if (f[0] == n * n) {
				return {true, 0};
			} else if (f[1] == n * n) {
				return {true, 1};
			} else {
				return {false, 0};
			}
		};
		auto [ok, val] = count(grid);
		// std::cout << ok << " " << val << "\n";
		if (ok) {
			return new Node(val, true);
		}
		auto make = [&](int sr, int sc) {
			int lr = n / 2, lc = n / 2;
			Grid res;
			for (int i = sr; i < sr + lr; i++) {
				res.push_back({});
				for (int j = sc; j < sc + lc; j++) {
					res.back().push_back(grid[i][j]);
				}
			}
			// print(res);
			return res;
		};
		Grid top_left = make(0, 0),
			top_right = make(0, n / 2),
			bottom_left = make(n / 2, 0),
			bottom_right = make(n / 2, n / 2);
		// print(top_left);
		return new Node(val, false, construct(top_left), construct(top_right), construct(bottom_left), construct(bottom_right));
	}

	// void
	// print(std::vector<int> x)
	// {
	// 	// std::cout << "1D vector\n";
	// 	for (int _x : x) {
	// 		std::cout << _x << " ";
	// 	}
	// 	std::cout << "\n";
	// }

	// void
	// print(std::vector<std::vector<int>> x)
	// {
	// 	// std::cout << "2D vector\n";
	// 	for (auto _x : x) {
	// 		print(_x);
	// 	}
	// 	std::cout << "\n";
	// }
};