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

#include <bits/extc++.h>
using namespace __gnu_pbds;

typedef tree<int, null_type,less<int> , rb_tree_tag, tree_order_statistics_node_update> ost;

int main()
{
    int n,k;
    cin>>n>>k;
    ost A;
    for(int i=1; i<=n; i++){
        A.insert(i);
    }
    int ind=0;
    while (A.size()!=0){
        ind+=k%(A.size());
        ind%=(A.size());
         auto ans=A.find_by_order(ind);
        cout<<*ans<<" ";
        A.erase(ans);

        if(ind==A.size())ind=0; 
    }
    return 0;
}