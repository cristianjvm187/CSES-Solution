#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,ai;
    cin>>n>>x;
    map <int,int> dic;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        cin>>ai;
        A.push_back(ai);
        dic[ai]++;
    }
    bool v= false;
    vector<int> ans;
    for (auto i: A)
    {
        dic[i]--;
        if ( dic.find(x-i)!= dic.end() and dic[x-i]>0 )
        {
            ans.push_back(i);
            ans.push_back(x-i);
            v=true;
            break;
        }
        dic[i]++;
    }
    if (v)
    {
        int cont=0;
        for(int i=0;i<n;i++)
        {
            if( A[i]==ans[0])
            {
                cout<<i+1<<" ";
                cont=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if( A[i]==ans[1] and i!= cont)
            {
                cout<<i+1<<" ";
                cont++;
                break;
            }
        }
    }
    else cout<<"IMPOSSIBLE"<<endl;
 
    return 0;
}