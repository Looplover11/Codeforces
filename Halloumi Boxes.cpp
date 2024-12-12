#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if(k>1){
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
        }
        cout<<"YES"<<endl;
        return;
    }
    int prev,curr;
    cin>>prev;
    bool y = true;
    for(int i=0;i<n-1;i++){
        cin>>curr;
        if(prev>curr)
        y = false;
        prev=curr;
    }
    if(y)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
