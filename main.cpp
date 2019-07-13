#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/keyboard-row/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<string> findWords(vector<string> &words) {
        static unordered_map<char, int> letters{
                {'q', 1}, {'w', 1}, {'e', 1}, {'r', 1}, { 't', 1}, { 'y', 1 },
                { 'u', 1 }, { 'i', 1 }, { 'o', 1 }, { 'p', 1 },
                { 'a', 2 }, { 's', 2 }, { 'd', 2 }, { 'f', 2 }, { 'g', 2},
                { 'h', 2 }, { 'j', 2 }, { 'k', 2 }, { 'l', 2 },
                { 'z', 3 }, { 'x', 3 }, { 'c', 3 }, { 'v', 3 },
                { 'b', 3 }, { 'n', 3 }, { 'm', 3 },
                { 'Q', 1 }, { 'W', 1 }, { 'E', 1 }, { 'R', 1 }, { 'T', 1}, { 'Y', 1 },
                { 'U', 1 }, { 'I', 1 }, { 'O', 1 }, { 'P', 1 },
                { 'A', 2 }, { 'S', 2 }, { 'D', 2 }, { 'F', 2 }, { 'G', 2},
                { 'H', 2 }, { 'J', 2 }, { 'K', 2 }, { 'L', 2 },
                { 'Z', 3 }, { 'X', 3 }, { 'C', 3 }, { 'V', 3 },
                { 'B', 3 }, { 'N', 3 }, { 'M', 3 }
        };
        vector<string> r;
        for (auto& s : words) {
            bool ok = true;
            auto row = letters[s[0]];
            for (int i = 0; ok && i < s.length(); ++i) {
                if (row != letters[s[i]])
                    ok = false;
            }
            if (ok) r.push_back(s);
        }
        return r;
    }
};

void test1() {
    vector<string> v1{"Hello", "Alaska", "Dad", "Peace"};

    vector<vector<int>> v2{
            vector<int>{0, 1, 0, 0},
            vector<int>{1, 1, 1, 0},
            vector<int>{0, 1, 0, 0},
            vector<int>{1, 1, 0, 0}
    };

    cout << " ? " << Solution().findWords(v1) << endl;
}

void test2() {

}

void test3() {

}