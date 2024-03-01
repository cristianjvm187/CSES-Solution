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
    vi arr(n);
    multiset<ii> coj;
    fore(n){
        cin>>arr[i];
    }
    fore(n){
        if(coj.lower_bound(make_pair(arr[i],i) )==coj.end()  ){
            coj.insert(make_pair(arr[i],i));
        }
        else{
            coj.erase(coj.lower_bound(make_pair(arr[i],i)));
            coj.insert(make_pair(arr[i],i));    
        }
    }
    cout<<coj.size()<<endl;
    return 0;
}