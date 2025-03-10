template <typename T>
class discrete {
	std::vector<T> vec;
	bool unique = false;

	void shrink() {
		if (not unique) {
			unique = true;
			std::ranges::sort(vec);
			vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
		}
	}

public:
	explicit discrete<T>() {}

	void add(T v) {
		vec.push_back(v);
		unique = false;
	}

	int get(T v) {
		shrink();
		return std::ranges::lower_bound(vec, v) - vec.begin();
	}

	int size() {
		shrink();
		return vec.size();
	}

	int& operator[](int i) {
		shrink();
		return vec.at(i);
	}
};