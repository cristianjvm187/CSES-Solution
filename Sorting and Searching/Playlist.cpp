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
const int MOD = 1e9+7;
const double EPS=1e-9;
 
int main(){
    int n,ai,ans,c;
    cin>>n;
    map<int, int > compression;
    vi arr;
    c=0;
    for(int i=0; i<n; i++){
        cin>>ai;
        if(compression.find(ai)== compression.end()){
            compression[ai]=c;
            arr.push_back(c);
            c++;
        }
        else{
            arr.push_back(compression[ai]);
        }
    }
    vi frec(c+2,0);
    ans=1;int aux=1;
    //fore(n) cout<<arr[i]<<" ";
    //cout<<endl;
    int i=0, j=1;
    frec[arr[i]]++;
    while(j<n){
        //  cout<<i<<" "<<j<<" a a "<<arr[i]<<" "<<arr[j]<<" frec i "<<frec[arr[i]]<<" "<<frec[arr[j]]<<endl;
        if(frec[arr[j]]==0){
            aux++;
            frec[arr[j]]++;
            j++;
        }
        else{
            aux--;
            //frec[arr[j]]++;
            frec[arr[i]]--;
            //j++;
            i++;
        }
        ans=max(ans,aux);
    }
    cout<<ans<<endl;
    return 0;
}