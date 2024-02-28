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
    //65
    string s="";
    cin>>s;
    vi abc(27,0);
    vi ans(s.size());
    for(int i=0; i<s.size(); i++){
        abc[(int)s[i]- 65   ]++;
    }
    int c=0;
    for(int i=0; i<27; i++){
        if(abc[i]%2==1)c++;
    }
    if( (s.size()%2==1 and c!=1) or (s.size()%2==0 and c>1) ) cout<<"NO SOLUTION"<<endl;
    else{
        string a="";
        string t="";
        for(int i=0; i<27;i++){
            if(abc[i]%2>=1){
                t+=(char)(i+65);
            }
            if(abc[ i]>1){
                for(int j=0; j<(abc[i]/2); j++) a+= (char)(i+65);
            }
        }

        if( t!=""){
            for(int i=0; i<a.size(); i++){
                cout<<a[i];
            }
            cout<<t[0];
            for(int i=a.size()-1; i>=0; i--){
                cout<<a[i];
            }
        }
        else{
            for(int i=0; i<a.size(); i++){
                cout<<a[i];
            }
            for(int i=a.size()-1; i>=0; i--){
                cout<<a[i];
            }
         }
    }
    return 0;
}
