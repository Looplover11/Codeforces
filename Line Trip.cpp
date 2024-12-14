#include<bits/stdc++.h>
using namespace std;
void solve(){
vector<int>v;
int n,x,temp,max;
cin>>n>>x;
for(int i=0;i<n;i++)
{

    cin>>temp;
    v.push_back(temp);

}
max = v[0];
for(int i=1;i<n;i++)
{

    temp = v[i]-v[i-1];
    if(max<temp)
    max = temp;
}
if(max<2*(x-v[n-1]))
max= 2*(x-v[n-1]);
cout<<max<<endl;
return;
}

int main(){

    int t;  
    cin >> t;
    while (t--) 
        solve();
    return 0;   

}