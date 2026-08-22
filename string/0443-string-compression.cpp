class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int writeIdx = 0; // Pointer to modify array in-place
        int i = 0;

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            // Count occurrences of currentChar
            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }

            // Step 1: Write character
            chars[writeIdx++] = currentChar;

            // Step 2: Write count if greater than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char ch : countStr) {
                    chars[writeIdx++] = ch;
                }
            }
        }

        return writeIdx;
    }
};
