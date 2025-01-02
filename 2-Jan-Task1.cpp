#include<bits/stdc++.h>
using namespace std;
int main(){
    class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<grid.size();i++){
             int maxi=-1;
            for(int j=0;j<grid.size();j++){
                maxi=max(maxi,grid[i][j]);
            }
            v1.push_back(maxi);
        }
        for(int j=0;j<grid.size();j++){
            int maxi=0;
            for(int i=0;i<grid.size();i++){
                maxi=max(maxi,grid[i][j]);
            }
            v2.push_back(maxi);
        }
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                int mini=min(v1[i],v2[j]);
                sum+=abs(mini-grid[i][j]);
            }
        }return sum;
    }
};
}