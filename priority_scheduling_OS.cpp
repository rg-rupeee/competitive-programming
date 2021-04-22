#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter number of process: ";
  cin>>n;

  int i;
  vector<tuple<int, int, int>> v;
  int priority, burstTime, process;
  cout<<"Enter priority and burst time of all process: "<<endl;
  for(i=0; i<n; i++){
    process = i+1;
    cin>>priority>>burstTime;
    v.push_back(make_tuple(priority, process, burstTime));
  }
  sort(v.begin(), v.end());
  
 int total;
 vector<int> wt(n);
 vector<int> tat(n);
 wt[0] = 0;
 tat[0]= get<2>(v[0]); 
 for (int i = 1; i < v.size(); i++) 
 {
    wt[i]  = wt[i-1] + get<2>(v[i-1]);
    tat[i] = wt[i] + get<2>(v[i]);
 }

  cout<<"Process  Priority  B.T    W.T   T.A.T"<<endl;
 for(i=0; i<v.size(); i++){
   cout<<"P"<<get<1>(v[i])<<"        "<<get<0>(v[i])<<"         "<<get<2>(v[i])<<"       "<<wt[i]<<"      "<<tat[i]<<endl;
 }

}