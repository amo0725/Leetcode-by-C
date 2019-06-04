#include<stdio.h>
#include<limits.h>

bool isPalindrome(int x){
    int A = x;
    int rev = 0;
    if(x < 0) return false;
    while(x != 0){
        int B = x % 10;
        x /= 10;
        if((rev > INT_MAX/10) || ((rev == INT_MAX) && (B==7))) return false;
        if((rev < INT_MIN/10) || ((rev == INT_MIN) && (B==-8))) return false;
        rev = rev*10 + B;
    }
    if(rev == A) return true;
    else return false;
}


int main(){
	printf("EXAMPLE 1:\n\nINPUT: 123\nOUTPUT: %d\n\n",isPalindrome(121));
	printf("EXAMPLE 2:\nINPUT: -121\nOUTPUT: %d\n\n",isPalindrome(-121));
	printf("EXAMPLE 3:\n\nINPUT: 10\nOUTPUT: %d\n\n",isPalindrome(10));
}
