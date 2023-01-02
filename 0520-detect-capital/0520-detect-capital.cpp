class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
      int cap=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])){
                cap++;
            }
        }
        if((cap==1 && isupper(word[0])) || cap==0 || cap==n){
            return true;
        }return false;
        
    }
};