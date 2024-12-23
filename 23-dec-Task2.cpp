class Solution {
public:
    int minimumMoves(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                s.replace(i,3,"OOO");
                count++;
            }
        }return count;
    }
};
