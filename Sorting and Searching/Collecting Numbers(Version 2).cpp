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
    int n,ai,q;
    cin>>n>>q;
    vi pos(n+2);
    vi arr(n+1);
    fore(n){
        cin>>arr[i];
        pos[arr[i]]=i+1;
    }
    pos[0]=0;
    pos[n+1]=n+1;   
    int ans=1;
    for(int i=1; i<=n-1; i++){
        if(pos[i]>pos[i+1]) ans++;
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        int L=arr[l],R=arr[r];
        cout<<L<<"  s "<<R<<" xx  "<<pos[L]<<" "<<pos[R]<<endl; 
            if( pos[L]> pos[L-1] and pos[R] < pos[L-1] ) ans++;
            if( pos[L]< pos[L+1] and pos[R]> pos[L+1]  )ans++;
            if(  pos[L]<pos[L-1] and pos[R]< pos[L-1]  ) ans--;
            if( pos[L] >pos[L+1] and  pos[R]<pos[L+1]) ans--;

            if( pos[R]> pos[R-1] and pos[L] < pos[R-1] ) ans++;
            if( pos[R]< pos[R+1] and pos[L]> pos[R+1]  )ans++;
            if(  pos[R]<pos[R-1] and pos[L]< pos[R-1]  ) ans--;
            if( pos[R] >pos[R+1] and  pos[L]<pos[R+1]) ans--;
        swap(pos[L],pos[R]);

        cout<<ans<<endl;
    }
    return 0;
}