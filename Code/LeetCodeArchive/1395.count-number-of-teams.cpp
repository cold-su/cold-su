/*
 * @lc app=leetcode id=1395 lang=cpp
 *
 * [1395] Count Number of Teams
 */

// @lc code=start
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int c=0;
        kloop(rating, c);
        reverse(rating.begin(), rating.end());
        kloop(rating, c);
        return c;
    }

    // void read(vector<int> array){
    //     for(auto prev:array){
    //         std::cout<<prev<<" ";
    //     }
    //     std::cout<<"\n";
    // }

    void kloop(vector<int> array, int& counter){
        for(int i=0; i<array.size()-2; i++){
            // if(array[i]>array[i+1]) continue;
            for(int j=i+1; j<array.size()-1; j++){
                if(array[j]>array[i]){
                    solve(j, array, 0, counter);
                }
                else continue;
            }
        }
    }
    
    void solve(int right, vector<int> array, int index, int& counter){
        sort(array.begin()+right+1, array.end()-index);
        int max= *max_element(array.begin()+right, array.end()-index);
        if(max>array[right]){
            index++;
            counter++;
            solve(right, array, index, counter);
        }
        else return;
    }
};
// @lc code=end

