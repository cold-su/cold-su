#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>

void read(std::vector<int> array){
    for(auto prev:array){
        std::cout<<prev<<" ";
    }
    std::cout<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int a;
    std::cin>>a;
    std::vector<int> arr(a);
    read(arr);
    return 0;
}
