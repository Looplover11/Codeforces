#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,min=INT_MAX,count=0;
  vector<int> b,c;
  
  cin>>n;
  vector<int> v(n);
  for(int i =0;i<n;i++){
    cin>>v[i];
    if(v[i]<min)
     min =v[i];
  }
  for(int i =0;i<n;i++){
    if(v[i]==min)
    count ++;
  }
  if(count>=n)
  cout<<"-1"<<endl;
  else{
     for(int i =0;i<count;i++){
      b.push_back(min);
  }
  for(int i =0;i<n;i++){
    if(v[i]!=min)
    c.push_back(v[i]);
  }
  
  cout<<b.size()<<" "<<c.size()<<endl;
  for(int i =0;i<b.size();i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;
    for(int i =0;i<c.size();i++){
    cout<<c[i]<<" ";
  }
  cout<<endl;
    
  }
  return;


}

int main(){

    int t;  
    cin >> t;
    while (t--) 
        solve();
    return 0;   

}