#include <iostream>
// (n+1)%2==1 ou
// (n+1)%2==0 ji
int main(){
    int t;
    std::cin>>t;
    while(t-->0){
        int counter=0;
        int len;
        std::cin>>len;
        int arr[len];
        int mod=1e9+7;
        for(int i=0; i<len; i++){
            std::cin>>arr[i];
            // arr[i]%=mod;
        }
        for(int i=0; i<len-1; i++){
            if((arr[i]+1)%2==0){
                for(int j=i+1; j<len; j++){
                    if((arr[j]+1)%2==1){
                        arr[i]= arr[i]<arr[j]? arr[i]+arr[j]:arr[i];
                        arr[j]= arr[i]>arr[j]? arr[i]+arr[j]:arr[j];
                        counter++;
                    }
                }
            }
        }
            
            // if((arr[i]+1)%2==1){
            //     for(int j=i+1; j<len; j++){
            //         if((arr[j]+1)%2==0){
            //             arr[i]= arr[i]<arr[j]? (arr[i]+arr[j])%mod:arr[i];
            //             arr[j]= arr[i]>arr[j]? (arr[i]+arr[j])%mod:arr[j];
            //             counter++;
            //         }
            //     }
            // }
        // }
        
        

        // for(auto prev:arr){
        //     std::cout<<prev<<" ";
        // }
        // std::cout<<"\n";
        // while(len-->0){

        // }
        std::cout<<counter<<"\n";
    }
    return 0;
}
