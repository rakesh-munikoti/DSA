#include <sstream>
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // if(pattern.size() != s.size()){
        //     return false;
        // }
        // unordered_map<char,vector<string>> mpp;
        // for(int i=0;i<s.size();i++){
        //     mpp[pattern[i]].push_back(s[i]);
        // }
        // for(auto it : mpp){
        //     if(it.second.size() > 1){
        //         return false;
        //     }
        // }
        // return false;
        unordered_map<char, string> mpp;
        unordered_map<string, char> revmpp;
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        for(int i=0;i<pattern.size();i++){
            if(pattern.size() != words.size()){
                return false;
            }
            if(mpp.find(pattern[i]) != mpp.end() && mpp[pattern[i]] != words[i]){
                return false;
            }
            if(revmpp.find(words[i]) != revmpp.end()){
                if(revmpp[words[i]] != pattern[i]){
                    return false;
                }
            }
            mpp[pattern[i]] = words[i];
            revmpp[words[i]] = pattern[i];
        }
        return true;
    }
};