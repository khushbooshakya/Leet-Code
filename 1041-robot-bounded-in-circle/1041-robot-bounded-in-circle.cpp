class Solution {
public:
    bool isRobotBounded(string instructions) {
        unordered_map<int, pair<int, int> > m;
        m.insert({0, {1, 0}});
        m.insert({1, {0, 1}});
        m.insert({2, {-1, 0}});
        m.insert({3, {0, -1}});
        int s = 0, first = 0, second = 0;
        for (const auto& ele: instructions) {
            if (ele == 'L') {
                s = (s + 1) % 4;
            } else if (ele == 'R') {
                s = (s + 3) % 4;
            } else {
                first += m[s].first;
                second += m[s].second;
            }
        }
        // cout << s <<"; (" << first << ", " << second << ")" << endl;
        if (s == 0 && ((first != 0) || (second != 0))) {
            return false;
        }
        return true;
    }
};