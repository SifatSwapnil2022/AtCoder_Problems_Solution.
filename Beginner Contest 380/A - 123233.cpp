#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int cnt1=0,cnt2=0,cnt=0;
while(n>0){
    int ans = n%10;
    if(ans==1){
        cnt1++;
    }
    else if(ans==2)cnt2++;
    else if(ans==3)cnt++;
    n=n/10;


}
if(cnt1==1 && cnt2==2 && cnt==3)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return 0;
}
