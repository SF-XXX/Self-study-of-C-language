//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int num1,num2;
//int Random_number(){
//    //生成0~100的随机数
//    srand(time(NULL));
//    int Random;
//    for (int i = 5; i <= 10; i++) {
//        Random = rand()%101;
//    }
//    return Random;
//}
//
//int judgment(){
//    if(num1>num2){
//        printf("输入的数小了\n");
//        return 0;
//    } else if(num1<num2){
//        printf("输入的数大了\n");
//        return 0;
//    }else{
//        printf("恭喜你获胜\n");
//        return 1;
//    }
//}
//
//int main(){
//    int a=0;
//    num1 = Random_number();
//    printf("请猜出我给你的数(共有5次机会)\n");
//    for(int i = 5;i >= 1;i--){
//        a:printf("请输入数字(还剩%d次机会)：",i);
//        fflush(stdout);
//        scanf("%d",&num2);
//        if(num2>=0&&num2<=100){
//            a = judgment();
//            if(a==1){
//                break;
//            }
//        }else{
//            printf("请重新输入\n");
//            goto a;
//        }
//    }
//    if(a==0)
//        printf("你输了\n");
//    printf("谢谢游玩！随机数是%d\n",num1);
//
//    return 0;
//}
