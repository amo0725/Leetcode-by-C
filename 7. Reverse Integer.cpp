#include<stdio.h>
#include<limits.h>

int reverse(int x){
    if(x < INT_MIN || x > INT_MAX ) return 0;
    int rev=0;
    while(x !=0){
        int A = x % 10;
        x /= 10;
        if((rev > INT_MAX/10) || (rev == INT_MAX/10 && A == 7)) return 0;
        if((rev < INT_MIN/10) || (rev == INT_MIN/10 && A == -8)) return 0;
        rev = rev * 10 + A;
    }
    return rev;
}

int main(){
	printf("EXAMPLE 1:\n\nINPUT: 123\nOUTPUT: %d\n\n",reverse(123));
	printf("EXAMPLE 2:\nINPUT: -123\nOUTPUT: %d\n\n",reverse(-123));
	printf("EXAMPLE 3:\n\nINPUT: 120\nOUTPUT: %d\n\n",reverse(120));
}
