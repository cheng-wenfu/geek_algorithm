#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        // 最后一位开始
        while (i >= 0) {
            if (digits[i] != 9) {
                digits[i]++;
                return digits;
            }
            // 当前值为 9，加1为10，进一位
            digits[i] = 0;
            i--;
        }
        //  跳出循环，表示全为 9，位数加一
        vector<int> newDigits(digits.size() + 1);
        newDigits[0] = 1;
        return newDigits;
    }
};