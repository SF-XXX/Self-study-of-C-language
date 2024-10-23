#include<stdio.h>

int main(){
    int i,j,k;
    for (i=1;i<=100;i++) {
        printf("我打印了%d次了\n", i);
        if (i == 20) {
            goto a;
        }
    }
    a :
    printf("打印结束了！\n");

    return 0;
}