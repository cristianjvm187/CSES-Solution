#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,pi;
    long long X;
    cin>>N>>X;
    vector <int> arr;
    for (int n=0; n<N; n++){
        cin>>pi;
        arr.push_back(pi);
    }
    sort(arr.begin(), arr.end());
    int i=0,j=N-1;long long su=0,ans=0;
    su=arr[i]+arr[j];
    while(i<j)
    {
        if(su>X)
        {
            j--;
            ans++;
            su=1LL*arr[i]+1LL*arr[j];
        }
        else {j--;i++;su=arr[i]+arr[j];ans++;}
    }
    if(i==j)ans++;
    cout<<ans<<endl;
    return 0;
}