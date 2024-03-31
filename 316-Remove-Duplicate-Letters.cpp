class Solution {
public:
    string removeDuplicateLetters(string s) {
        if(s.length()==1){
            return s;
        }
        vector<int>visited(26,0);
        vector<int>lastIdx(26,-1);
         int l =s.length();
        for(int i=0; i< l ; i++){
            lastIdx[s[i]-'a']=i;
        }
        string res;
        for(int i=0; i< s.length() ; i++){
            if(res.empty()){
                res.push_back(s[i]);
                visited[s[i]-'a']=1;
            }
            else if(!visited[s[i]-'a']){
                while(!res.empty() && res.back()> s[i] &&  i< lastIdx[res.back()-'a'] ){
                    visited[res.back()-'a']=0;
                    res.pop_back();
                }
                res.push_back(s[i]);
                visited[s[i]-'a']=1;

            }
        }
        return res;
    }
};