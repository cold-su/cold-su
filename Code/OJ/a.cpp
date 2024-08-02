#include <bits/stdc++.h>

int arr[5000000];
int nums[5];

int main(void){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c,index;
    std::cin>>c;
    while(c-->0){
        std::cin>>nums[index++];
    }

    int j=1, k=0;
    for(int i=1; i<index; i++){
        // std::cout<<( nums[i]>nums[i-1] )<<" ";
        while(nums[i]>nums[i-1]==false){
            // j++;
            // nums[i]+=pow(3,k);
            for(int k=0; k<j-1; k++){
                
            }
        }
    }

    // for(auto prev:nums){
    //     std::cout<<prev<<" ";
    // }

    return 0;
}
