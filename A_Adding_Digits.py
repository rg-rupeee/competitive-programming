
# ll a, b, n;
#   cin>>a>>b>>n;
#   ll i, j;

#   ll temp;
#   bool flag;
#   rep(j, n){
#     flag = false;
#     for(i=0; i<=9; i++){
#       temp = a*10 + i;
#       if(temp%b == 0){
#         a = temp;
#         flag = true;
#         break;
#       }
#     }

#     if(!flag){
#       break;
#     }

#   }

#   if(flag){
#     cout<<a<<'\n';
#   }
#   else{
#     cout<<-1<<'\n';
#   }


a = input()
b = input()

flag = True

for x in range(n):
  flag = False
  for i in range(10)
    temp = a*10 + i
    if(temp%b == 0): 
      a = temp
      flag = true
      break
  
  if (flag == False):
    break 

if (flag == True): 
  print(a)
else: 
  print(-1)

