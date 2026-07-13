class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        // Dono ends se andar aate hue swap karte jao
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
}; 
