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
        string s; cin >> s;
        unordered_set<string> st;
        for(int i = 0; i < s.size()-1; i++){
            string temp = s.substr(i,2);
            st.insert(temp);
        }

        cout << st.size() << endl;
    }
    
}