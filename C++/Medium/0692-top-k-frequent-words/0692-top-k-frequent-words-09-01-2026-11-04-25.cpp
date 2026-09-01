class Solution {
public:
    struct Compare{
        bool operator()(pair<int,string>& a , pair<int,string>& b){
                if(a.first == b.first){
                    return a.second > b.second;
                }
                return a.first < b.first;
            }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int> freqmap;
        for(int i = 0 ; i < words.size() ; i++){
            freqmap[words[i]]++;
        }
        priority_queue<pair<int,string>, vector<pair<int,string>>, Compare> maxHeap;
        for(auto it = freqmap.begin() ; it != freqmap.end() ; it++){
            string word = it -> first;
            int frequency =  it -> second;
            maxHeap.push({frequency , word});
        }
        vector<string> ans;
        for(int i = 0 ; i < k ; i++){
            string str = maxHeap.top().second;
            ans.push_back(str);
            maxHeap.pop();
        }
        return ans;
    }
};