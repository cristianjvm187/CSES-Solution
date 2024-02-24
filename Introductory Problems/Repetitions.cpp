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
    string s;
    cin>>s;
    char last=s[0];
    int ans=1, aux=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==last){
            aux++;
        }
        else{
            last=s[i];
            ans=max(ans, aux);
            aux=1;
        }
    }
    ans=max(ans, aux);
    cout<<ans<<endl;
    return 0;
}