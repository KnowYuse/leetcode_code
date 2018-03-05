class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int len1 = J.length();
        int len2 = S.length();
        int re = 0;
        for(int i = 0;i < len1;i++){
            for(int j = 0;j < len2;j++){
                if(J[i]==S[j])
                    re++;
            }
        }
        return re;
    }
};
