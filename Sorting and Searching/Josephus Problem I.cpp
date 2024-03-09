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
    int n;
    cin>>n;
    vi arr(n+1,1);
    int c=1;
    int t=33;
    while( t--){
        for(int j=1; j<=n; j++){
            //cout<<j<<" "<<arr[j]<<" "<<c<<endl;
            if (arr[j]==1 and c==1) c++;
            else if(arr[j]==1 and c==2){
                arr[j]=0;
                cout<<j<<" ";
                c=1;
            }
        }
    }

    return 0;
}