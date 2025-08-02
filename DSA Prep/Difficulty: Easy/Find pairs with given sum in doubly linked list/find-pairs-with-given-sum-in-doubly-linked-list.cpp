

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        Node* temp = head;
        vector<pair<int, int>> freq;
        unordered_set<int> pairing; // more efficient for lookups

        while (temp) {
            int complement = target - temp->data;
            if (pairing.find(complement) != pairing.end()) {
                freq.push_back({complement, temp->data});
            } else {
                pairing.insert(temp->data);
            }
            temp = temp->next; // forgot to move temp forward
        }
        sort(freq.begin(),freq.end());
        return freq;
    }
};
