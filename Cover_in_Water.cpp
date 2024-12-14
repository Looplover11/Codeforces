#include<bits/stdc++.h>
using namespace std;
void solve(){

int n;
string s;
cin >>n>>s;
int y = s.find("...");
if(y != string::npos){
    cout<<"2"<<endl;
    return;
}
int count=0;
for(int i =0;i<n;i++)
{
    if(s[i]=='.')
    count++;
}
cout<<count<<endl;
return;
}

int main(){

    int t;  
    cin >> t;
    while (t--) 
        solve();
    return 0;   

}