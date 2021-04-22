#include<iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	    ll TESTCSE;
	    cin>>TESTCSE;
	    while(TESTCSE--){
	        ll n,a,k;
	        cin>>n>>a>>k;
	        ll A[n+1][a+1];
	        
	        memset(A,0, sizeof(A));
	        
	        for(ll i=1;i<=n;i++){
	            for(ll j=1;j<=a;j++){
	                cin>>A[i][j];
	            }
	        }
	        for(int i=1;i<=n;i++){
	            for(ll j=1;j<=a;j++){
	                A[i][j]+=A[i][j-1];
	            }
	        }
	        for(ll j=1;j<=a;j++){
	            for(ll i=1;i<=n;i++){
	               A[i][j]+=A[i-1][j];
	            }
	        }
	        ll sums=0;
	        for(int side=1;side<=n;side++){
	            for(int i=1;i<=n-side+1;i++){//for this
	                ll low=1;
	                ll high=a-side+1;
	                ll mid;
	                ll p;
	                ll flag =0;
	                
	                while(low <= high){
	                    mid= (high + low)/2;
				//binary search row-wise
	                    ll sum=A[i+side-1][mid + side -1]- A[i+side-1][mid-1]-A[i-1][mid+side-1]+A[i-1][mid-1];
	                    if(sum>=k*side*side){
	                        high=mid-1;
	                        p=mid;
	                        flag=1;
	                    }//cout<<
	                    else{
	                        low=mid+1;
	                    }
	                    
	                }
	                if(flag ==1){
	                    sums+=(a-side-p+2);
	                }
	            }
	        }
	        cout<<sums<<endl;
	    }
	
		return 0;
}
