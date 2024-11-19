//#include "stdio.h"
//
////定义一个函数，将两数相除，获取它们的余数
//int getRemainder(int NumeA,int NumeB,int* res);
//
//int main(){
//    int a=10,b=5;
//    int res=0;
//    int c = getRemainder(a,b,&res);
//    if(c==0){
//        printf("除数不能为0\n");
//        goto end;
//    } else{
//        printf("余数是%d\n",res);
//    }
//
//    end:return 0;
//}
//int getRemainder(int NumeA,int NumeB,int* res){
//    if(NumeB==0){
//        return 0;
//    } else{
//        *res = NumeA%NumeB;
//        return 1;
//    }
//}