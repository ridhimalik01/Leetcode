class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1; 
        unsigned int b = ~0; 
        while (num & b) {
            b <<= 1;
        }
        return num ^ ~b;
    }
};