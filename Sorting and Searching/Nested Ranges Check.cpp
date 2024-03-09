#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<pair<int,int>,int> ii;
typedef pair<int,int> II;
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

typedef tree<II, null_type,less<II> , rb_tree_tag, tree_order_statistics_node_update> ost;

int main()
{
    int t,k;
    cin>>t;
    vector< pair<int,int>> arr;
    vector<II> arr2;
    map< pair<int,int>, int> dic;
    fore(t){
        int x,y;
        cin>>x>>y;
        dic[{x,y}]=i;
        pair<int,int> aux ={-x,y};
        II o={x,-y};
        arr.push_back(aux);
        arr2.push_back(o);
    }
    sort(arr.begin(),arr.end());
    ost A;

    vi ans(t+5);
    for(int i=0; i<arr.size(); i++){
        //cout<<-arr[i].f<<" "<<arr[i].s<<" ";
        pair<int, int> aux={arr[i].s, i};
        A.insert( aux );
        int s= A.order_of_key( aux );
        //cout<<s<<" sss "<<endl;
        ans[  dic[ {-arr[i].f, arr[i].s} ] ]=(s==0)?0:1;
    }
    for(int i=0; i<arr.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    ost B;
    vi ans2(t+5);
    sort(arr2.begin(),arr2.end());
    for(int i=0; i<arr2.size(); i++){
        //cout<<arr2[i].f<<" "<<arr2[i].s<<" ";
        II aux= {- arr2[i].s, -i};
        B.insert( aux );
        int r=B.order_of_key( {-arr2[i].s,-i}  );
        int m=B.size();
        //cout<<m-(r+1)<<endl;

        ans2 [ dic[ { arr2[i].f, -arr2[i].s}] ] = (m-r-1==0)?0:1 ;
    }
    for(int i=0; i<arr.size(); i++){
        cout<<ans2[i]<<" ";
    }




    return 0;
}