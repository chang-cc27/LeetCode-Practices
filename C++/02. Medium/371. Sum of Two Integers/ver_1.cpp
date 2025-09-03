class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1; // 計算進位
            a = a ^ b;   // 計算不含進位的和
            b = carry;   // 把進位加回去
        }
        return a;
    }
};
