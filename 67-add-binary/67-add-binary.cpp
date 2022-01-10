class Solution {
public:
    string addBinary(string a, string b) {
        auto ia = a.rbegin();
        auto ib = b.rbegin();
        string tmp;
        int cf = 0;
        int i = 0;
        auto adc = [&i, &cf](){
            if(i > 1) {
                i -= 2;
                cf = 1;
            } else {
                cf = 0;
            }            
        };
        while(ia != a.rend() && ib != b.rend()) {
            i = (*ia + *ib) - 2 * '0' + cf;
            adc();
            tmp.push_back(i + '0');
            ++ia, ++ib;
        }
        while(ia != a.rend()) {
            i = (*ia) - '0' + cf;
            adc();
            tmp.push_back(i + '0');
            ++ia;
        }
        while(ib != b.rend()) {
            i = (*ib) - '0' + cf;
            adc();
            tmp.push_back(i + '0');
            ++ib;
        }
        if(cf) {
            tmp.push_back('1');
        }
        return string(tmp.rbegin(), tmp.rend());
    }
};