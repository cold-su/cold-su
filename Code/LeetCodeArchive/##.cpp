// Shortest Distance After Road Addition Queries I

class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        // for(int i=0; i<queries.size(); i++){
        //     int index=queries[i][0];
        //     int t=index;
        //     while(t-->0){

        //     }
        // }
        vector<int> ans;
        int ct=0;
        for(int i=1; i<=queries.size(); i++){
            solve(0, queries, ct);
            ans.push_back(ct);
            ct=0;
        }
        return ans;
    }

private:
    void solve(int i, vector<vector<int>>& queries, int& counter){
        counter++;
        if(i<0) return;
        int t=queries[i][1]-queries[i][0]-1;
        while(t-->0){
            queries.erase(queries.begin()+queries[i][0]+1);
        }
        solve(i-1, queries, counter);
    }
};


// class Solution {
// public:
//     vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
//         int counter=0;
//         vector<int> ans;
//         for(auto add:queries){
//             for(int i=0; i<=n; i++){
//                 if(i==add[0]){
//                     i=add[1];
//                     counter++;
//                     continue;
//                 }
//                 counter++;
//             }
//             ans.push_back(counter);
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
//         vector<int> road(n+1);
//         // int index=0;
//         int counter=0;
//         vector<int> ans;
//         for(auto r:queries){
//             counter=0;
//             for(int i=0; i<r[0]; i++){
//                 road[i]=0;
//             }
//             for(int i=r[0]; i<r[1]+1; i++){
//                 road[i]=r[1];
//                 // @note
//                 // if(road[i]-1 == prev_road[i]){
//                 //     road[i]=prev_road[i];
//                 // }
                
//             }
//             // @note
//             for(auto prev:road){
//                 std::cout<<prev<<" ";
//             }
//             std::cout<<"\n";

//             for(int i=1; i<=n; i++){
//                 if(road[i-1]==0 && i==1){
//                     counter++;
//                 }
//                 if(road[i]!=road[i-1] && road[i]!=0 && road[i-1]!=0 || road[i]==0){
//                     counter++;
//                 }
//             }
//             // ans.push_back((counter>=min)? min:counter);
//             ans.push_back(counter);
//             // min=counter;
//         }

//         int min= *min_element(ans.begin(), ans.end());
//         bool finded=false;
//         for(int i=0; i<ans.size(); i++){
//             if(ans[i]==min){
//                 finded=true;
//             }
//             if(finded){
//                 ans[i]=min;
//             }
//         }
        
//         return ans;
//     }
// };