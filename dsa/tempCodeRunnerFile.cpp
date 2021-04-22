
  ll mx=-1e9;
  ll prev=0;
  ll cur;
  for(i=0; i<n; i++){
     cur = max(arr[i], prev+arr[i]);
     mx = max(mx, cur);
     prev = cur;
  }

  cout<<mx<<endl;