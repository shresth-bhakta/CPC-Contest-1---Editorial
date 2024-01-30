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
 
int binexp(int a, int b, int m){
    int result = 1;
    while(b > 0){
        if(b&1){
            result = (result * a)%m;
        }
        a = (a*a)%m;
        b >>= 1;
    }
    return result;
}
 
int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int o = 1;
        int e = 2;
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((i+j)%2 == 0){
                    cout << o <<  " ";
                    o += 2;
                }
                else{
                    cout << e << " ";
                    e += 2;
                }
            }cout << endl;
        }cout << endl;
    }
    
}

