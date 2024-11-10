//查找：基础查找（顺序查找）、二分查找、插值查找、分块查找和 哈希查找

//基础查找（顺序查找）
//#include<stdio.h>
//
//int order(int arr[],int len,int num);
//
//int main(){
//    int arr[] = {55,99,44,33,22,11};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int num = 33;
//    int index = order(arr,len,num);
//    printf("%d",index);
//
//
//    return 0;
//}
//int order(int arr[],int len,int num){
//    for(int i = 0;i < len;i++){
//        if(arr[i]==num){
//            return i;
//        }
//    }
//    return -1;
//}

//二分查找
//#include "stdio.h"
//
//int binarySearch(int arr[],int len,int num);
//
//int main(){
//    int arr[] = {11,33,44,55,66,88};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int num = 55;
//    int index = binarySearch(arr,len,num);
//    printf("%d",index);
//
//    return 0;
//}
//int binarySearch(int arr[],int len,int num){
//    int min = 0;
//    int max = len - 1;
//    while(min<=max){
//        int mid = (max+min)/2;
//        if(arr[mid]>num){
//            max = mid - 1;
//        } else if(arr[mid]<num){
//            min = mid + 1;
//        } else if(arr[mid]==num){
//            return mid;
//        }
//    }
//    return -1;
//}

//插值查找
//#include "stdio.h"
//
//int binarySearch(int arr[],int len,int num);
//
//int main(){
//    int arr[] = {11,33,44,55,66,88};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int num = 55;
//    int index = binarySearch(arr,len,num);
//    printf("%d",index);
//
//    return 0;
//}
//int binarySearch(int arr[],int len,int num){
//    int min = 0;
//    int max = len - 1;
//    while(min<=max){
//        int mid = min + (num-arr[min]) / (arr[max]-arr[min]) * (max-min);
//        if(arr[mid]>num){
//            max = mid - 1;
//        } else if(arr[mid]<num){
//            min = mid + 1;
//        } else if(arr[mid]==num){
//            return mid;
//        }
//    }
//    return -1;
//}

//排序：冒泡排序、选择排序

//冒泡排序
//#include<stdio.h>
//
//int main(){
//    int arr[]={3,4,6,5,1,2};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    for(int i = 1;i < len;i++){
//        for(int j = 0; j < len-i ; j++){
//            if(arr[j]>arr[j+1]){
//                int item = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = item;
//            }
//        }
//    }
//    for (int i = 0; i < len; ++i) {
//        printf("%d\t",arr[i]);
//    }
//
//    return 0;
//}

//选择排序
#include<stdio.h>

int main(){
    int arr[]={3,4,6,5,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < len-1;i++){
        int num = arr[i];
        for(int j = 1+i;j < len;j++){
            if(arr[i]>arr[j]){
                int item = arr[i];
                arr[i] = arr[j];
                arr[j] = item;
            }
        }
    }
    for (int i = 0; i < len; ++i) {
        printf("%d\t",arr[i]);
    }

    return 0;
}