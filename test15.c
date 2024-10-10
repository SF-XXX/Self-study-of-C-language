//#include<stdio.h>
//
//int main(){
//    //练习1：为你一个整数n，请你判断是否是2的幂次方
////    float n;
////    printf("请输入一个整数:");
////    fflush(stdout);
////    scanf("%f",&n);
////    while(n>1 && n%2==0){
//////  这里n%2==0是确保数少循环几次，因为2的幂次方一定是可以得到1
//////  但是像32除几次后就有余数，但那个数不是1就可以判断他不是2的幂次方
////        n = n/2;
////    }
////    if(n==1){
////        printf("yes");
////    } else{
////        printf("no");
////    }
//
//    //练习2：打印折纸的次数
//    //需求：世界最高峰是珠穆朗玛峰（8844.43米=8844430毫米）
//    //假如我有一张足够大的纸，他的厚度是0.1毫米
//    //请问，我折叠多少次可以折成珠穆朗玛峰的高度
////    float Mount_Everest=8844430,thickness=0.1,num=0;
////    while (thickness<Mount_Everest){
////        thickness=thickness*2;
////        num++;
//////        printf("%f\n",thickness);
////    }
////    printf("总共需要折%.0f次纸的高度才可以和珠穆朗玛峰一样高\n",num);
//
//
//    //练习3：将一个整数x，进行反转举例123反转后变成321
////    int x,num;
////    printf("请输入一个整数：");
////    fflush(stdout);
////    scanf("%d",&x);
////    while (x>=1) {
////        num = x % 10;
////        x = x / 10;
////        printf("%d", num);
////    }
//
//    //练习4：给你一个非负数x：，计算并返回x的算数平方根
////    int x,num;
////    printf("请输入一个整数：");
////    fflush(stdout);
////    scanf("%d",&x);
////    num = 1;
////    while (num*num<=x){
////        num++;
////    }
////    printf("%d这个数是的平方根是%d",x,num-1);
//
//
//    return 0;
//}