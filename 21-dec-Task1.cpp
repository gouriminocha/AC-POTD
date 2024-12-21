#include<iostream>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        long i=0,sum=0;
        while(i!=s.size()-1){
            sum+=abs(s[i]-s[i+1]);
            i++;
        }return sum;
    }
};