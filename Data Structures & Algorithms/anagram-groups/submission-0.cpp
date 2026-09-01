class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted;
        for(int i = 0; i < strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            sorted.push_back(temp);
        }

        vector<pair<string,string>> comb;

        for(int i = 0; i < strs.size();i++){
            comb.push_back({sorted[i],strs[i]});
        }

        sort(comb.begin(),comb.end());

        vector<vector<string>> res;
        for(int i = 0; i < strs.size(); i++){
            vector<string> temp;
            temp.push_back (comb[i].second);
            while(i < strs.size() - 1 && comb[i].first == comb[i+1].first){
                temp.push_back (comb[i+1].second);
                i++;
            }
            res.push_back(temp);
        }
        return res;
    }
};
