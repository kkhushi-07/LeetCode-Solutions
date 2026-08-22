class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // First string ko reference prefix maan lete hain
        string prefix = strs[0];

        // Rest of the strings ke saath compare karte hain
        for (int i = 1; i < strs.size(); i++) {
            // Jab tak current string `strs[i]` prefix se start na ho
            while (strs[i].find(prefix) != 0) {
                // Prefix ka aakhri character trim karo
                prefix.pop_back(); // Basic Operation: Trimming/Access
                
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};
