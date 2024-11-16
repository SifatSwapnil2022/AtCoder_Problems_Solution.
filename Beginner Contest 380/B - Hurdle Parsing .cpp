#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
int cnt=0;
for(int i=1;i<str.size()-1;i++){
    if(str[i] == '-'){
        cnt++;
    }
    else{
        cout<<cnt<<" ";
        cnt=0;
    }
}
cout<<cnt<<endl;

}
