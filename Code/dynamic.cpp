#include <bits/stdc++.h>

using namespace std;

int main() { // 计数排序

    int _, m;
    std::cin >> _ >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) { // 记录原始数组
    	std::cin >> v[i];
    }
    
    int max = *max_element(v.begin(), v.end()); // 找到最值
    int min = *min_element(v.begin(), v.end());

    vector<int> temp(max - min + 1);// 计数
    for (int i = 0; i < m; i++) {
    	temp[v[i] - min]++;
    }

    vector<int> res(m); // 根据计数结果还原
    int idx = 0;
    for (int i = 0; i < temp.size(); i++) {
    	while (temp[i]--) { // 铺陈重复的数字
    		res[idx++] = min + i;
    	}
    }

    for (int& prev : res) {
    	std::cout << prev << " ";
    }
    return 0;
}