/*
定义一个数组存储全班80位同学的年龄
定义一个数组存储全班50位同学的身高
定义一个数组存储全身每一件衣服的价格
 */

//#include "stdio.h"
//
//int main(){
//    int age[80];
//    double ShenGao[50];
//    double YiFu[3];
//
//    return 0;
//}


/*
定义数组存储5个学生年龄，并初始化
定义数组存储你女朋友的身高，并初始化
 */
//#include<stdio.h>

//int main(){
//    int age01[5]={17,18,19,20,21};
//    int age02[]={17,18,19,20,21};
//
//    double ShenGao01[]={1.68,1.58};
//    //如果知道有几个数据但不知道值是多少
//    double ShenGao02[2]={};
//
//    return 0;
//}


/*
定义一个长度为5的数组，并进行初始化：1 2 3 4 5
完成一下要求：
        1.获取索引为0，2，4的元素，并求和
        2.把最后一个索引的元素修改为10
 */
//
//#include "stdio.h"
//
//int main(){
//    int arr[]={1,2,3,4,5};
//    int num1 = arr[0];
//    int num2 = arr[2];
//    int num3 = arr[4];
//    int sum = num1+num2+num3;
//    printf("求和：%d\n",sum);
//    printf("最后一位的值修改前%d\n",arr[4]);
//    arr[4]=10;
//    printf("最后一位的值修改后%d\n",arr[4]);
//
//    return 0;
//}


/*
定义数组一个长度为5的数组，并进行初始化：1 2 3 4 5
完成遍历数组，并把每个元素打印出来
 */

//#include<stdio.h>
//
//int main(){
//    int arr[]={1,2,3,4,5};
//
//    int len = 5;
//    for(int i = 0; i < len; i++){
//        printf("%d\n",arr[i]);
//    }
//
//    return 0;
//}

/*
定义一个变量，并查看他所存储的地址
 */

//#include<stdio.h>
//
//int main(){
//    int a=10;
//    int b=10;
//    int c=10;
//    printf("%p\n",&a);
//    printf("%p\n",&b);
//    printf("%p\n",&c);
//    printf("-----------------------------------\n");
//
//    int d[]={1,2,3};
//    printf("%p\n",&d);
//    printf("%p\n",&d[0]);
//    printf("%p\n",&d[1]);
//    printf("%p\n",&d[2]);
//    printf("-----------------------------------\n");
//
//    int len = sizeof(d)/sizeof(d[0]);
//    printf("%d",len);
//
//    return 0;
//}


/*
    数组的两个问题：
        1、数组作为形参传输的时候，要注意什么？
        2、数组的索引越界
 */
//
//#include "stdio.h"
//void PrintArr(int arr[],int len);
//
//int main(){
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
////    int len = sizeof(arr) / sizeof(arr[0]);
////    PrintArr(arr,len);
//
//    printf("%d\n",arr[20]);
////    在CLion里输出的是0，但是实际上输出的是一个错误的值
//    return 0;
//}
//
//void PrintArr(int arr[],int len){
//    for(int i =0;i < len; i++){
//        printf("%d\n",arr[i]);
//    }
//}


//找最值
//#include<stdio.h>
//int Max(int arr[],int len);
//int Min(int arr[],int len);
//
//int main(){
//    int arr[] = {0,5,7,9,-1,5,2};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int max = Max(arr,len);
//    int min = Min(arr,len);
//    printf("这个数组里面最大值是：%d\t最小值是：%d\n",max,min);
//
//    return 0;
//}
//int Max(int arr[],int len){
//    int max = arr[0];
//    for(int i = 1;i < len;i++){
//        if(arr[i]>max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//int Min(int arr[],int len){
//    int min = arr[0];
//    for(int i = 1;i < len;i++){
//        if(arr[i]<min) {
//            min = arr[i];
//        }
//    }
//    return min;
//}



//数组求和(初级)
//随机生成10个1~100的数组进行求和
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(){
//    int arr[10]={0};
//    int len = sizeof(arr)/sizeof(int);
//    int sum=0;
//    srand(time(NULL));
//    for(int i = 0;i < len;i++){
//        arr[i] = rand()%100+1;
//    }
//    for(int i = 0;i < len;i++){
//        sum+=arr[i];
//    }
//    printf("这个数组的和是：%d\n",sum);
//
//
//    return 0;
//}

//数组求和(高级)
//随机生成10个1~100的数组进行求和，不能重复，求平均值，统计有多少数比平均值小
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int contains(int arr[],int len,int num);
//double Age(int arr[],int len);
//int Num(int arr[],int len,double avg);
//
//int main(){
//    //存储不重复的数据
//    int arr[10]={0};
//    int len = sizeof(arr)/sizeof(int);
//    srand(time(NULL));
//    for(int i = 0; i < len;){
//        int num = rand()%100+1;
//        int flag = contains(arr,len,num);
//        if(!flag){
//            arr[i]=num;
//            i++;
//        }
//    }
//    for(int i = 0;i < len;i++){
//        printf("%d\n",arr[i]);
//    }
//    printf("---------------\n");
//
//    //求平均值
//    double avg = Age(arr,len);
//    printf("%.3lf\n",avg);
//    printf("---------------\n");
//
//    //求比平均值小的数有几个
//    int count = Num(arr,len,avg);
//    printf("比平均值小的数有%d个\n",count);
//}
//
//int contains(int arr[],int len,int num){
//    for(int i = 0; i < len;i++){
//        if(arr[i]==num){
//            return 1;
//        }
//    }
//    return 0;
//}
//
//double Age(int arr[],int len){
//    double sum = 0;
//    for(int i = 0;i < len;i++){
//        sum += arr[i];
//    }
//    double age = sum/len;
//    return age;
//}
//
//int Num(int arr[],int len,double avg){
//    int count = 0;
//    for(int i = 0;i < len;i++){
//        if(arr[i] < avg){
//            count += 1;
//        }
//    }
//    return count;
//}


//反转数组
//录入键盘五个数到数组里面并且把里面的数反转
//#include<stdio.h>
//
//void PrintAge(int arr[],int len);
//
//int main(){
//    int arr[5] = {0};
//    int len = sizeof(arr) / sizeof(int);
//    for(int i = 0; i < len;i++){
//        printf("请输入第%d个数：",i+1);
//        fflush(stdout);
//        scanf(" %d",&arr[i]);
//    }
//    printf("反转前：");
//    PrintAge(arr,len);
//
//    int i = 0;
//    int j = len - 1;
//    while(i < j){
//        int item = arr[i];
//        arr[i] = arr[j];
//        arr[j] = item;
//
//        i++;
//        j--;
//    }
//    printf("反转后：");
//    PrintAge(arr,len);
//
//    return 0;
//}
//void PrintAge(int arr[],int len){
//    for(int i = 0;i < len;i++){
//        printf("%d\t",arr[i]);
//    }
//    printf("\n");
//}


