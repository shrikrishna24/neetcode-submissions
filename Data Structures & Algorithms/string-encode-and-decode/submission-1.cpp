class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string = "";

        for (auto& x : strs) {
            for (char ch : x) {
                int value = (unsigned char)ch;

                encoded_string += to_string(value / 2) + "," + to_string(value % 2) + "#";
            }
            encoded_string += "/";
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> result;

        string current = "";
        int quotient = 0;
        int remainder = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                int value = quotient * 2 + remainder;
                char ch = (char)value;

                current += ch;
                   quotient = 0;
                remainder = 0;
            } else if (s[i] == ',') {
                remainder = s[i + 1] - '0';
                i++;
            } else if (s[i] == '/') {
                result.push_back(current);
                current = "";
   
            } else {
                quotient = (quotient * 10) + (s[i] - '0');
            }
        }

        return result;
    }
};
