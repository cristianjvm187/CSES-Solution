#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,a,b,ans=-1,cont =0;
    cin>>n;
    vector<pair<int,int>> A;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        A.push_back({a,0});A.push_back({b,1});
    }
    sort(A.begin(),A.end());
    for(auto x: A)
    {
        if (x.second==0)cont++;
        else cont--;
        ans=max(ans,cont);
    }
    cout<<ans<<endl;
    return 0;
 
}