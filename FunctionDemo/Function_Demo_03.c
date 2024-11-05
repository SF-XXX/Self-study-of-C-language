#include<stdio.h>

int sum(int base,int additional){
    int sum = base + additional;
    return sum;
}

int main(){
    int num1,num2,i,j;
    printf("请输入一个基础分数再输入一个附加分（空格隔开）：");
    fflush(stdout);
    scanf("%d %d",&num1,&num2);
    i = sum(num1,num2);
    printf("请输入另一个人的一个基础分数再输入一个附加分（空格隔开）：");
    fflush(stdout);
    scanf("%d %d",&num1,&num2);
    j = sum(num1,num2);
    if(i<j){
        printf("第二个学生的分数比第一个学生高");
    } else if(i>j){
        printf("第一个学生的分数比第二个学生高");
    } else if(i=j)
        printf("两个人的分数一样");


    return 0;
}