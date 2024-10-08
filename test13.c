//#include<stdio.h>
//
//int main(){
//    //输出1-5的数
////    for(int i=1;i<=5;i++)
////        printf("当前输出的数是：%d\n", i);
//
//    //输出5-1的数
////    for(int i = 5; i >= 1 ; i--)
////        printf("当前输出的数是：%d\n", i);
//
//    //要求1-5的和
////    int sum = 0;
////    for (int i = 1; i <= 5; ++i) {
////       sum += i;
////    }
////    printf("1-5的和是%d\n",sum);
//
//    //求1-100的偶数和
////    int sum = 0;
////    for (int i = 0; i < 100; ++i) {
////        if(i%2==0){
////            sum+=i;
////        }
////    }
////    printf("1-100的偶数和是%d\n",sum);
//
//    //键盘录入两个数字，表示一个范围
//    //统计这个范围中可以被6整除，又可以被8整除的数字有几个
//    int sum = 0;
//    int down ,up=20 ;
//    printf("请输入一个数为这个数的下限：");
//    fflush(stdout);
//    scanf("%d",&down);
//    printf("请输入一个数为这个数的上限：");
//    fflush(stdout);
//    scanf("%d",&up);
//    if(down>up || down == up){
//        printf("请输入正确的语句\n");
//        return 0;
//    } else{
//        for (; down <= up;down++) {
//            if(down%6==0&&down%8==0){
//                sum +=1;
//            }
//        }
//    }
//    printf("被6整除，又可以被8整除的数字有%d个\n",sum);
//    fflush(stdout);
//
//    return 0;
//}