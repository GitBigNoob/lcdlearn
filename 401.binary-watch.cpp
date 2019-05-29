/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */
class Solution {
public:
    vector<string> res;
    vector<string> readBinaryWatch(int num) {
        vector<string> times;
        for (int i = 0; i < 12; i++) {
            bitset<4> hour((size_t) i);
            for (int j = 0; j < 60; j++) {
                bitset<6> mi((size_t) j);
                if (hour.count() + mi.count() == num)
                    times.push_back(to_string(i) + (j < 10? ":0": ":") + to_string(j));
            }
        }

        return times;
    }
};

