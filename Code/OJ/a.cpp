#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> create(int length){
    std::vector<int> array(length);
    return array;
}

void solve(int len, std::vector<int> array){
    int index=0;
    while(len-->0){
        std::cin>>array[index++];
    }
    sort(array.begin(), array.end());
    for(int i=0; i<array.size()-1; i++){
        if(array[i]!=array[i+1]-1){
            std::cout<<"Not jolly";
            return;
        }
    }
    std::cout<<"Jolly";
}

int main(){
    int len=0;
    std::cin>>len;
    std::vector<int> arr=create(len);
    solve(len, arr);
    return 0;
}