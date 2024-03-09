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
    int x,n;
    cin>>x>>n;
    vi arr(n);
    fore(n){
        cin>>arr[i];
    }
    map <int, int> m;
    set<int> A;
    A.insert(0); A.insert(x);
    m[x]=1;
    fore(n){
        A.insert(arr[i]);
        auto it= A.lower_bound(arr[i]);
        auto i2= next(it); auto i1= prev(it);
        //cout<<(*it)<<" "<<(*i2)<<" "<<(*i1)<<endl;
        int a = (*i1), b = (*i2), c = (*it);
        if (m.find(b - c) != m.end()) m[b - c]++;
        else m[b - c] = 1;
        if (m.find(c - a) != m.end()) m[c - a]++;
        else m[c - a] = 1;
        m[b - a]--;
        //cout <<m[b-a]<<endl;
        if (m[b - a] == 0) m.erase(  m.find(b-a) );
        //cout << (m.find(b- a) == m.end())<<endl; 
        auto ans=(m.rbegin());
        cout<< (ans)->first <<endl;
    }

    return 0;
}