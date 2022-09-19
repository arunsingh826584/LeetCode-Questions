class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(int i = 0;i<s.length();i++){
            int p = s.at(i)-96;
            while(p>0){
                sum = sum + p%10;
                p = p/10;
            }
        }
        //System.out.println(sum);
        
        while(k-->1){
            int r = 0;
            while(sum>0){
                r = r + sum%10;
                sum = sum/10;
            }
            sum = r;
        }
        return sum;
        
    }
};