#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    set<int> s;
    vector<int> v1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            s.insert(i);
        }
    }
    for(int j=0;j<s.size();j++){
        if(s[j]+1==s[j+1]){
            v.push_back(s[j]);
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]+1==v[i+1]){
            v1.push_back(v[i]);
            temp=v[i+1]
        }
    }
}