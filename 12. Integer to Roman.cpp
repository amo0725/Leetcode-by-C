#include<stdio.h>
#include<stdlib.h> 

char * intToRoman(int num){
    char* R = (char*)malloc(sizeof(char)*500);
    char* Rom = R;
    if(num / 1000 > 0){
        for(int i = 0; i < num / 1000; i++) *R++ = 'M';
        num -= (num / 1000) * 1000;
    }
    if(num / 100 > 5 && num / 100 < 9){
        *R++ = 'D';
        for(int i =0; i < (num/100)-5; i++) *R++ = 'C';
        num -= (num/100)*100;
    }
    if(num / 100 > 0 && num / 100 < 4){
        for(int i =0; i < num/100; i++) *R++ = 'C';
        num -= (num/100)*100;
    }
    if(num / 100 == 9){
        *R++ = 'C';
        *R++ = 'M';
        num -= 900;
    }
    if(num / 100 == 4){
        *R++ = 'C';
        *R++ = 'D';
        num -= 400;
    }
    if(num / 100 == 5){
        *R++ = 'D';
        num -= 500;
    }
    if(num / 10 > 5 && num / 10 < 9){
        *R++ = 'L';
        for(int i =0; i < (num/10)-5; i++) *R++ = 'X';
        num -= (num/10)*10;
    }
    if(num / 10 > 0 && num / 10 < 4){
        for(int i =0; i < num/10; i++) *R++ = 'X';
        num -= (num/10)*10;
    }
    if(num / 10 == 9){
        *R++ = 'X';
        *R++ = 'C';
        num -= 90;
    }
    if(num / 10 == 4){
        *R++ = 'X';
        *R++ = 'L';
        num -= 40;
    }
    if(num / 10 == 5){
        *R++ = 'L';
        num -= 50;
    }
    if(num > 5 && num < 9){
        *R++ = 'V';
        for(int i =0; i < num-5; i++) *R++ = 'I';
    }
    if(num > 0 && num < 4){
        for(int i =0; i < num; i++) *R++ = 'I';
    }
    if(num == 9){
        *R++ = 'I';
        *R++ = 'X';
    }
    if(num == 4){
        *R++ = 'I';
        *R++ = 'V';
    }
    if(num == 5){
        *R++ = 'V';
    }
    *R = NULL;
    return Rom;
}

int main(){
	int num;
	scanf("%d",&num);
	char* Rom = intToRoman(num);
	while(*Rom){
		printf("%c",*Rom);
		*Rom++;
	}
}
