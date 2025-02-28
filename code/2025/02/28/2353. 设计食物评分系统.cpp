class FoodRatings {
public:
	using str = std::string;
	using p = std::pair<int, str>;
	std::unordered_map<str, p> fo;
	std::unordered_map<str, std::set<p>> cui;
	FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
		for (int i = 0; i < foods.size(); i++) {
			fo[foods[i]] = { -ratings[i], cuisines[i]};
			cui[cuisines[i]].emplace(-ratings[i], foods[i]);
		}
	}

	void changeRating(string food, int newRating) {
		auto& [origin, cuisine] = fo[food];
		cui[cuisine].erase({ origin, food});
		cui[cuisine].emplace(-newRating, food);
		origin = -newRating;
	}

	string highestRated(string cuisine) {
		return cui[cuisine].begin()->second;
	}
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */