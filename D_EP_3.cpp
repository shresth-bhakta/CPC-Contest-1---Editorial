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
 
bool static cmp(pii a, pii b){
    return a.ss < b.ss;
}
 
int32_t main()
{
    int n; cin >> n;
    vector<pii> v;
    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        v.pb({x,y});
    }
    sort(v.begin(), v.end(), cmp);

    int st = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(st <= v[i].ff){
            ans++;
            st = v[i].ss;
        }
    }

    cout << ans <<  endl;
}