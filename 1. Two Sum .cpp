#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * Newnums =(int*)malloc(sizeof(int)*2);
    for(int i=0; i < numsSize; i++){
        for(int j=numsSize; j > 0 ; j--){
            if(i==(j-1)) break;
            if(nums[i]+nums[j-1]==target){
                    Newnums[0]=i;
                    Newnums[1]=j-1;
                    break;
            }
        }
    }
    *returnSize=2;
    return Newnums;
}

int main(){
	int returnSize;
	int nums[]={2,7,11,15};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int target = 9;
	int *New = twoSum(nums, numsSize, target, &returnSize);
	printf("[%d, %d]", New[0], New[1]);
}
