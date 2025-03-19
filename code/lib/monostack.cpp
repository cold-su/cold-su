template <class T,
          class Container = std::deque<std::pair<T, int>>/*(value, index)*/,
          class Compare = std::less<T>>
class monostack {
protected:
	Container d;
public:
	explicit monostack<T, Compare>() {}
	bool empty() {return d.empty(); }
	void push(T val, int i) {while (not d.empty() and Compare{}(d.back().first, val)) {d.pop_back(); } d.push_back(std::pair{val, i}); }
	void pop() {d.pop_back(); }
	std::pair<T, int> top() {return d.back(); }
};