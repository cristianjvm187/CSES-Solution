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
    vi A[2]; int c=0,ind=0 , i=1;
    if( (n+1)%4==0){
        cout<<"YES"<<endl;
        while(i<=n ){
            A[ind].push_back(i);
            i++;
            c++;
            if( c==2) {
                c=0;
                ind=(ind+1)%2;
            }
        }
        ind=0;
        for(; ind<2; ind++){
            cout<<A[ind].size()<<endl;
            for(auto a: A[ind]){
                cout<<a<<" ";
            }
            cout<<endl;
        }
    }
    else if(n%4==0){
        c=1;
        cout<<"YES"<<endl;
        while(i<=n ){
            A[ind].push_back(i);
            i++;
            c++;
            if( c==2) {
                c=0;
                ind=(ind+1)%2;
            }
        }
        ind=0;
        for(; ind<2; ind++){
            cout<<A[ind].size()<<endl;
            for(auto a: A[ind]){
                cout<<a<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
