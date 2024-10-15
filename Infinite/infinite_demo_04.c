//#include<stdio.h>
//
//int main(){
////    //判断一个数，小于等于它的是不是一个质数
////    int num1,num2，b;
////    printf("请输入一个整数分析从它开始后面的数有没有质数：");
////    fflush(stdout);
////    scanf("%d",&num1);
////    for(int i = 1 ; i <= num1 ;i++ ){
////        b = 0;
////        for (int y = 2; y < i; y++) {
////            if(i%y==0){
////                b++;
////                break;
////            }
////        }
////        if(b==0){
////            num2++;
////        }
////    }
////    printf("从它开始有%d个质数\n",num2);
//
//
//
//    //1的1次方+2的2次方+3的3次方+.....+10的10次方，结果是多少（结果过大用long long）
////    long long sum,product;
////    for (int i = 1 ; i <= 10; i++) {
////        product = i ;
////        for (int j = 1 ; j < i ; j++) {
////            product *= i;
////        }
////        sum += product;
////    }
////    printf("%lld",sum);
//
//    //0~1000之内，每一位数字之和等于15的数。例如78，168
//    int number , sum = 0;
//    for(number = 0;number <= 1000 ; number++ ){
//        int b = number,count=0,a;
//        while(b>0){
//            a = b%10;
//            count += a;
//            b = b/10;
//        }
//        if(count == 15 ){
//            sum++;
//        }
//    }
//    printf("符合要求的数有%d个\n",sum);
//    return 0;
//}