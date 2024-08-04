#include <iostream>
#include <algorithm>
#include <vector>

int h=0, counter=0;
int n=0, b=0;
int index=0;

std::vector<int> create(int len){
    std::vector<int> array(len);
    return array;
}

int solve(int len, std::vector<int> array){
    int h=0;
    while(len-->0){
        std::cin>>array[index++];
    }
    sort(array.begin(), array.end());
    for(int i=n-1; i>=0; i--){
        h+=array[i];
        counter++;
        if(h>=b){
            break;
        }
    }
    return counter;
}

int main(){
    std::cin>>n>>b;
    std::vector<int> arr=create(n);
    std::cout<<solve(n, arr);
    return 0;
}