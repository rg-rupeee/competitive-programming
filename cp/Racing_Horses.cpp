#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fs ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    //Code .....................
    ll n, i, j, mindiff, temp;
    cin>>n;
    ll s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    mindiff = 1e10;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j) continue;
            temp = s[i]-s[j];
            temp = abs(temp);
            if(temp<mindiff)
            {
                mindiff = temp;
                //cout<<i<<" "<<j<<" "<<mindiff;
            }
        }
    }
    cout<<mindiff<<'\n';
}

int main()
{
    fs
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
