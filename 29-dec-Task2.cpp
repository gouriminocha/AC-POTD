#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long int maxsum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxsum+=abs(arr[i]);
        }
        int i=0;
        long long int minop=0;
        while(i<n){
            if(arr[i]<0){
               
                i++;
                while(i<n && arr[i]<=0){
                    i++;
                }
                minop++;
            }
            else{
                i++;
            }
        }
    cout<<maxsum<<" "<<minop<<endl;
    }
return 0;
}
