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
 
void print(int n){
    if(n == 0) return;
    print(n-1);
    cout << n << " ";
    print(n-1);
}
 
int32_t main()
{
    int n; cin >> n;
    print(n);
}