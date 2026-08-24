class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if ( s.length()!= t.length() ){
            return false;
        }
        unordered_map<char,char> maps;
        unordered_map<char,char> mapt;
         for(int i =0 ;i< s.length();i++){
            char a = s[i];
            char b = t[i];
            if( maps.count(a) && maps[a]!=b){
                return false;
            }
            if( mapt.count(b) && mapt[b]!=a){
                return false;
            }
            maps[a]=b;
            mapt[b]=a;
         }
         return true;
    }
};