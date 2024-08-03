#include <iostream>

int main(){
    int t;
    std::cin>>t;
    while(t-->0){
        int prev,curr;
        std::cin>>curr;
        curr+=prev;
        std::cout<<curr<<" ";
        prev=curr;
    }
    return 0;
}
