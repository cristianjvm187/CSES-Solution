#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N;
    cin>>N;
    vector <int> arr;
    int ai;
    for (int i=0; i<N; i++){
        cin>>ai;
        arr.push_back(ai);
    }
    sort(arr.begin(),arr.end());
    int ans=1;
    ai=arr[0];
    for (int i=1; i<N; i++){
        if (arr[i]!= ai) {ans++; ai=arr[i];}
    }
    cout<<ans<<endl;
 
    return 0;
}