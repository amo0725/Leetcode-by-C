#include<stdio.h> 
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    int sum = 0;
    int carry=0;
    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head = l3;
    while(l1 != NULL || l2 != NULL || carry != 0){
        struct ListNode* add = (struct ListNode*)malloc(sizeof(struct ListNode));
        sum = l1 ? l1->val : 0;
        sum += l2 ? l2->val : 0;
        sum += carry;
        add->val = (sum > 9 ? sum-10 : sum);
        add->next = NULL;
        carry = sum / 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
        l3->next = add;
        l3 = add;
    }
    return head->next;
}


int main(){
	ListNode a,b,c;
	ListNode* l1 = &a;
	a.val = 2;
	a.next = &b;
	b.val = 4;
	b.next = &c;
	c.val = 3;
	c.next = NULL;
	
	ListNode A,B,C;
	ListNode* l2 = &A;
	A.val = 5;
	A.next = &B;
	B.val = 6;
	B.next = &C;
	C.val = 4;
	C.next = NULL;
	
	ListNode* Re = addTwoNumbers(l1,l2);
	
	printf("Input: ");
	int i=0;
	while(l1){
		i++;
		printf("%d ",l1->val);
		if(i<3)	printf("-> ");
		l1 = l1->next;
	}
	printf("   +   ");
	i=0;
	while(l2){
		i++;
		printf("%d ",l2->val);
		if(i<3)	printf("-> ");
		l2 = l2->next;
	}
	
	printf("\nOutput: ");
	i = 0;
	while(Re){
		i++;
		printf("%d ",Re->val);
		if(i<3)	printf("-> ");
		Re = Re->next;
	}
}
