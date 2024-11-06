#include<stdio.h>

////需求给两个长方形，判断谁的面积更大，如何定义函数
//double area(double length,double breadth){
//    double area = length * breadth;
//    return area;
//}
//
//int main(){
//    double length,breadth,rectangle[2];
//    printf("接下来准备输入两个长方形的长宽\n");
//    for(int i = 0 ; i <= 1 ; i++){
//        printf("请输入第%d个长方形的长：",i+1);
//        fflush(stdout);
//        scanf("%lf",&length);
//        printf("请输入第%d个长方形的宽：",i+1);
//        fflush(stdout);
//        scanf("%lf",&breadth);
//        rectangle[i] = area(length,breadth);
//    }
////    printf("请输入第一个长方形的长：");
////    fflush(stdout);
////    scanf("%d",&length);
////    printf("请输入第一个长方形的宽：");
////    fflush(stdout);
////    scanf("%d",&breadth);
////    rectangle1 = area(length,breadth);
//    if(rectangle[0] < rectangle[1]){
//        printf("第一个长方形比第二个长方形面积大");
//    }else if(rectangle[0] > rectangle[1]){
//        printf("第二个长方形比第一个长方形面积大");
//    } else{
//        printf("两个长方形面积一样");
//    }
//
//    return 0;
//}

//给两个圆，求哪个圆形面积更大
//double area(double radius){
//    double area = 3.14159 * radius;
//    return area;
//}
//
//int main(){
//    double radius,roundness[2];
//    printf("请输入两个圆的半径，来判断哪个圆的面积大：\n");
//    fflush(stdout);
//    for (int i = 0; i <= 1; i++) {
//        printf("请输入第%d个圆的半径：",i+1);
//        fflush(stdout);
//        scanf("%lf",&radius);
//        roundness[i] = area(radius);
////        printf("%d\n",sizeof(roundness[i]));
//    }
//    if(roundness[0] > roundness[1]){
//        printf("第1个圆比第2个圆面积大");
//    }else if(roundness[0] < roundness[1]){
//        printf("第2个圆比第1个圆面积大");
//    } else{
//        printf("两个圆面积一样");
//    }
//
//    return 0;
//}