#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,  k;
    //cout<<"Enter input";
    cin>>n;
    cin>>k;
    int avlT= 240-k;
    int spentT=0;
    int s=0;
    for(int i=1;i<=n;i++){
        spentT+=5*i;
        if(spentT<=avlT){
            s++;
        }
        else{
            break;
        }
    }
    cout<<s<<endl;
    return 0;

}