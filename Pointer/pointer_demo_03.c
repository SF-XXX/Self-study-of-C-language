//#include "stdio.h"

//定义一个函数，求数组的最大值和最小值，并进行返回
//void getMaxAadMin(int arr[],int len,int* max,int* min);
//int main(){
//    int arr[]={10,8,6,9,12,5,7,0};
//    int len = sizeof(arr)/sizeof(int);
//    int max = arr[0];
//    int min = arr[0];
//    getMaxAadMin(arr,len,&max,&min);
//    printf("这个数组的最大值是：%d\n这个数组的最小值是：%d\n",max,min);
//
//    return 0;
//}
//void getMaxAadMin(int arr[],int len,int* max,int* min){
//    *max = arr[0];
//    for(int i = 1;i < len;i++){
//        if(arr[i] > *max){
//            *max = arr[i];
//        }
//    }
//    *min = arr[0];
//    for(int i = 1;i < len;i++){
//        if(arr[i] < *min){
//            *min = arr[i];
//        }
//    }
//}


//练习
//#include<stdio.h>
//
////定义一个函数，求数组的最大值和最小值，并进行返回
//
//void getMaxAndMin(int arr[],int len,int* max,int* min);
//
//int main(){
//    int arr[]={1,2,3,4,5,6,77,0,-1};
//    int len = sizeof(arr)/sizeof(arr[0]);
//
//    int max=arr[0];
//    int min=arr[0];
//
//    getMaxAndMin(arr,len,&max,&min);
//
//    printf("这个数组的最大值是：%d\n这个数组的最小值是：%d\n",max,min);
//
//    return 0;
//}
//void getMaxAndMin(int arr[],int len,int* max,int* min){
//    for(int i = 1;i < len;i++){
//        if(arr[i] > *max){
//            *max = arr[i];
//        }
//    }
//    for(int i = 1;i < len;i++){
//        if(arr[i] < *min){
//            *min = arr[i];
//        }
//    }
//
//}