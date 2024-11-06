//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(){
//    /*
//        随机数<stdib.h>  standard library 标准库
//            srand()     设置种子
//            rand()      获取随机数
//     */
////    //设置种子
////    srand(1);
////
////    //获取10个随机数
////    for(int i = 1;i <= 10;i++){
////        int res1 = rand();
////        printf("%d\n",res1);
////    }
//
//
//
//    //上面的代码中种子不变，随机数不会改变
//    //解决随机数的结果固定  可以用时间去解决
//    //取0~100的数
//    //101-0=101
////    srand(time(NULL));
////
////    for(int i = 1;i <= 10;i++){
////        int res2 = rand()%101;
////        printf("%d\n",res2);
////    }
//
//
//    //练习1、12~87取5个随机数
////    srand(time(NULL));
////
////    for (int i = 1; i <= 5; ++i) {
////        int res3 = rand()%76+12;
////        printf("%d\n",res3);
////    }
//
//    //练习2、17~39取3个随机数（不包括39） 39-17=22
//    srand(time(NULL));
//    for(int i  = 1;i <= 3; i++){
//        int res4 = rand()%22+17;
//        printf("%d\n",res4);
//    }
//
//    return 0;
//}