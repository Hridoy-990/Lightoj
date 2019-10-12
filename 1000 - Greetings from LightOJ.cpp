#include <bits/stdc++.h>
using namespace std;
#define SC               scanf
#define PF               printf
#define ull              unsigned long long
#define ld               long double
#define D                double
#define F                first
#define S                second
#define pb               push_back
#define pf               push_front
#define MP               make_pair
#define sort_a(a)        sort(a.begin(),a.end());
#define sort_d(a)        sort(a.rbegin(),a.rend());
#define READ(f)          freopen(f, "r", stdin)
#define WRITE(f)         freopen(f, "w", stdout)
#define loop(x,y,z)      for(ll x=y; x<z; x++)
#define rev(s)           reverse(s.begin(),s.end())
#define it(it,mp)        for(auto it=mp.begin() ; it!=mp.end() ; it++)
#define IOS              ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define Erase(vec)       vec.erase(unique(vec.begin(),vec.end()),vec.end());
const int N = 1e5 + 5;
const int inf = 1e9 + 1;
const double eps = 1e-15;
const double EPS = 1e-9;
const double PI = acos(-1.0);
typedef long long int                   ll;
typedef pair<int,int>                   PII;
typedef vector<int>                     VI;
typedef vector<ll>                      VL;
typedef vector<string>                  VS;
typedef vector<char>                    VC;
typedef vector<bool>                    VB;
typedef vector<PII>                     VII;
typedef map<string,int>                 MSI;
typedef map<int,int>                    MII;
typedef map<char,int>                   MCI;
typedef map<int,string>                 MIS;
ll dx_8[]= {-1,-1,-1, 0,0, 1,1,1}, dy_8[]= {-1, 0, 1,-1,1,-1,0,1};  // Eight Side
ll dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};
ll gcd(ll a, ll b) {
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b) {
    return a*b/gcd(a,b);
}

///BIG MODE...
ll M=1000000007;   //Example  (n^p)%m
ll big_mod(ll n,ll p) {
    if(p==0)
        return 1;
    if(p%2==0) {
        ll ret=big_mod(n,p/2);
        return ((ret%M)*(ret%M))%M;
    } else
        return ((n%M)*(big_mod(n,p-1)%M))%M;

}
ll reminder(string s,ll n) {
    ll mod=0;
    loop(i,0,s.size()) {
        ll digit=(ll)s[i]-'0';
        mod=mod*10+digit;
        mod=mod%n;
    }
    return mod;
}
int main() {
    IOS
    //READ("");
    //WRITE("");
    int t, a,b, cs=0;
    cin>> t;
    while(t--) {
        cin >> a >> b;
        cout<<"Case "<<++cs<<": "<< a+b<<endl;

    }
    return 0;
}


