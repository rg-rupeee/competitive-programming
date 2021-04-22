#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll setBitNumber(ll n)
{
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n |= n >> 32;
    // n |= n >> 64;
    n = n + 1;
    return (n >> 1);
}

void solve(){
    ll n, x;
    cin>>n>>x;
    ll arr[n];
    ll i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    ll j, mask;
    i=0;
    while(1){
        while((arr[i]==0) && (i<n-1)){
            // cout<<"inc i : "<<i<<endl;
            i++;
        }

        if(i==n-1) break;

        j=i+1;
        mask = setBitNumber(arr[i]);
        while((arr[j]^mask) > arr[j]){
            j++;
            if(j>n-1){
                j=n-1;
                break;
            }
        }
        
        // cout<<"i and j : "<<i<<" "<<j<<'\n';

        arr[i] = arr[i]^mask;
        arr[j] = arr[j]^mask;
        x--;
    }
    

    if(x%2==1 && n==2){
        i=n-1;
        j=n-2;
        mask = 1;
        // cout<<"i and j : "<<i<<" "<<j<<'\n';
        arr[i] = arr[i]^mask;
        arr[j] = arr[j]^mask;
    }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
