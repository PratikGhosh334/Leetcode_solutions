// Last updated: 5/24/2025, 1:50:20 AM
class Solution {
        public int getsquare(int n){
            int sum=0;
            while(n!=0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
            }return sum;
        };

    public boolean isHappy(int n) {

        int slow = getsquare(n);
        int fast = getsquare(getsquare(n));

        while((fast!= 1) && (fast != slow)){

            slow = getsquare(slow);
            fast = getsquare(getsquare(fast));
        
        }

        return fast == 1;

    }
}