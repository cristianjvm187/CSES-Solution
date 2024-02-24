#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define pb push_back
#define all(a) a.begin(),a.end()
#define fore(n) for(int i=0;i<n;i++)
#define f first
#define s second

const int INF = 1e9;

int main()
{
    int n, ai,last=-1;ll ans=0;
    cin>>n;
    fore(n){
        cin>>ai;
        if(ai<last) ans+=1ll*(last-ai);
        else last=ai;
    }
    cout<<ans<<endl;
    return 0;
}