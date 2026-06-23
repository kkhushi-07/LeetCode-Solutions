class Solution {

public:

int findNumbers(vector<int>& nums) {

int value = 0; // Yeh track karega ki kitne numbers ke paas even digits hain


// 1. Loop 0 se shuru hoga aur size - 1 tak chalega

for(int i = 0; i < nums.size(); i++){

int count = 0; // 2. Har naye number ke liye count ko 0 reset karna zaruri hai

int j = nums[i];


// 3. Number ko 10 se divide karte jao jab tak wo 0 na ho jaye

while (j != 0) {

count++;

j = j / 10; // Digits kam karne ke liye divide karte hain

}


// Agar digits ka count even hai, toh value badhao

if(count % 2 == 0){

value += 1;

}

}


return value;

}

};
