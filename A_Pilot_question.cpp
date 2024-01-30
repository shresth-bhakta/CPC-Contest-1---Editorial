//Shresth's Template
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define fr0 for(int i=0; i<n; i++)
#define fr1 for(int i=1; i<=n; i++)
 
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<int> v(n);
        fr0{cin >> v[i];}

        sort(v.rbegin(), v.rend());

        int ans = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum +=v[i];
            if(sum >= m){
                ans = i+1;
                break;
            }
        }

        if(ans){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}