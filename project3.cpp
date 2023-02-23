class Solution {
public: int balancedStringSplit(String s) {
    char array[] = s.toCharArray();
    int left = 0, right = 0, count = 0;
    for(int i = 0; i < array.length; i++){
        if(array[i] == 'L'){
            left++;
        }
        if(array[i] == 'R'){
            right++;
        }
        if(left == right){
            count++;
        }
    }
    return count;
}
};
