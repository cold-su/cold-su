#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n, r;
	std::cin >> n >> r;

	std::vector<int> nums(n);
	for (int i = r; i < n; i++) {
		nums[i] = 1;
	}

	do {
		for (int i = 0; i < n; i++) {
			if (nums[i] == 0) {
				std::cout << std::setw(3) << i + 1;
			}
		}
		std::cout << "\n";
	} while (std::next_permutation(nums.begin(), nums.end()));
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
/*
#include<iostream>
#include<vector>
#include<functional>
#include<iomanip>
using namespace std;
int main()
{
    int n,r;cin>>n>>r;
    vector<int> arr(n+1);
    for(int i = 1;i<=n;i++)
    arr[i] = i;
    vector<int> ans(r+1);
    int ok = 0;
    std::function<void(int,int)> dfs = [&](int start,int step)
    {
        if(step>r||start>n) return;
        ans[step] = start;
        if(step==r)
        {
            for(int i = 1;i<=r;i++)
            {
                cout<<setw(3)<<ans[i];
                if(i==r) cout<<'\n';
            }
        }
        step+=1;
        dfs(start+1,step);
        step-=1;
        dfs(start+1,step);
    };
    dfs(1,1);
    return 0;
}
 */

/*
#include <stdio.h>
#include <stdlib.h>
int n,r;
int arr[21];
int p[21];
void dfs(int x,int start)
{
  if(x>r)
  {
    for(int i=1;i<=r;i++)
    printf("%3d",arr[i]);
    printf("\n");
    return ;
  }
    for(int i=start;i<=n;i++)
    {
      arr[x]=i;
      dfs(x+1,i+1);
      arr[x]=0;
    }

}
int main(int argc, char *argv[])
{
  scanf("%d %d",&n,&r);
  dfs(1,1);
  return 0;
}
 */

/*
#include<bits/stdc++.h>
using namespace std;
int a[52],u[52],r,n;
void dfs(int h){
    if(h==r+1){
        for(int i=1;i<h;i++){
            cout<<setw(3) << a[i];
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        if(u[i]==0&&a[h-1]<i){
            u[i]=1;
            a[h]=i;
            dfs(h+1);
            u[i]=0;
        }
    }
}
int main(){
    cin>>n>>r;
    dfs(1);
    return 0;
}
 */