using namespace std;
template <class T, size_t size = tuple_size<T>::value>
string to_debug(T, string s = "")
requires(not ranges::range<T>);
string to_debug(auto x)
requires requires(ostream &os) { os << x; }
{
	return static_cast<ostringstream>(ostringstream() << x).str();
}
string to_debug(ranges::range auto x, string s = "")
requires(not is_same_v<decltype(x), string>) {
	for (auto xi : x) s += ", " + to_debug(xi);

	return "[" + s.substr(s.empty() ? 0 : 2) + "]";
}
template <class T, size_t size>
string to_debug(T x, string s)
requires(not ranges::range<T>) {
	[&] <size_t... I>(index_sequence<I...>) { ((s += ", " + to_debug(get<I>(x))), ...); }(make_index_sequence<size>());
	return "(" + s.substr(s.empty() ? 0 : 2) + ")";
}
#define dbg(...) cout << __LINE__ << ": (" #__VA_ARGS__ ") = " << to_debug(tuple(__VA_ARGS__)) << endl
template<typename T1, typename T2> istream &operator>>(istream &cin, pair<T1, T2> &a) { return cin >> a.first >> a.second; }
template<typename T1> istream &operator>>(istream &cin, vector<T1> &a) { for (auto &x : a) cin >> x; return cin; }
template<typename T1> istream &operator>>(istream &cin, valarray<T1> &a) { for (auto &x : a) cin >> x; return cin; }
template<typename T1, typename T2> ostream &operator<<(ostream &cout, const pair<T1, T2> &a) { return cout << a.first << ' ' << a.second; }
template<typename T1, typename T2> ostream &operator<<(ostream &cout, const vector<pair<T1, T2>> &a) { for (auto &x : a) cout << x << '\n'; return cout; }
template<typename T1> ostream &operator<<(ostream &cout, const vector<T1> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout; }
template<typename T1, typename T2> bool cmin(T1 &x, const T2 &y) { if (y < x) { x = y; return 1; } return 0; }
template<typename T1, typename T2> bool cmax(T1 &x, const T2 &y) { if (x < y) { x = y; return 1; } return 0; }
template<typename T1> vector<T1> range(T1 l, T1 r, T1 step = 1) { assert(step > 0); int n = (r - l + step - 1) / step, i; vector<T1> res(n); for (i = 0; i < n; i++) res[i] = l + step * i; return res; }
template<typename T1> basic_string<T1> operator*(const basic_string<T1> &s, int m) { auto r = s; m *= s.size(); r.resize(m); for (int i = s.size(); i < m; i++) r[i] = r[i - s.size()]; return r; }
typedef unsigned ui;
typedef long long ll;
#define all(x) (x).begin(), (x).end()