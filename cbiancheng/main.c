#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Const.h"

int usingScan();
int usingIf();
int usingSwitch();
int usingWhileAndGetChar();
int usingCharArray();
int usingStrCat();
int usingStrCopy();
long factorial(int n);
int indexofArray();
int usingDefineFromConstH();
int usingPointer();
int usingPointerEx();
int usingPointerArray();
int swapUsingPointer();
void swap(int *pa, int *pb);
/**
**会自动将arr[] 转换为指向第一个元素的指针，所以里面的sizeof=4，必须要把length作为参数传进来
**等价于int findMax(int *parr, int length)
*/
int findMax(int arr[], int length)
{
    int max = arr[0];
    int i = 1;
    for(i = 1;i<length;i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;

}

int main()
{
//    return printMessage("Hello World!\n");
//    return usingScan();
//    return usingIf();
//    return usingSwitch();
//    return usingWhileAndGetChar();
//    return usingCharArray();
//    return usingStrCat();
//    long result = factorial(5);
//    printf("%d", result);
//    return indexofArray();
//    return usingDefineFromConstH();
//    return usingPointer();
//    return usingPointerVariable();
//    return usingPointerEx();
//    return usingPointerArray();
//    return swapUsingPointer();

//    int a = 1, b =2;
//    swap(&a, &b);
//    printf("a is now %d and b is %d", a, b);
    int arr[] = {1,4,11,22,3,24};
    printf("findMax is %d", findMax(arr, sizeof(arr)/sizeof(int)));
    return 0;
}

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

/**
* 通过修改pointer的值来交换变量
**/
int swapUsingPointer()
{
    int a = 100, b = 999, tmp;
    int *pa = &a, *pb = &b;
    printf("a is %d and b is %d\n", a, b);
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    printf("a is %d and b is %d\n", a, b);
    return 0;
}

int usingPointerArray()
{
    int arr[] = {1,2,3,4,5,6,7};
    int length = sizeof(arr)/sizeof(int);
    printf("array length %d, sizeof arr %d, sizeof int %d\n", length, sizeof(arr), sizeof(int));
    int i;
    for(i=0;i<length;i++){
        printf("%d\n",*(arr+i));
    }
    return 0;
}

int usingPointerEx()
{
    int a = 10, *pa=&a, *paa = &a;
    double b = 99.9, *pb = &b;
    char c='@', *pc = &c;

    printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b,&c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);

    pa ++;
    pb ++;
    pc ++;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);

    return 0;
}

int usingPointer()
{
    int a = 100;
    char msg[100] = "Hello World";
    printf("pointer to a %#X, pointer to msg %#X", &a, msg);
    return 0;
}

int usingPointerVariable()
{
    int *p1;
    int a = 100;
    p1 = &a;
    printf("%#X\n",p1);
    printf("%d",*p1);
    return 0;
}

int usingDefineFromConstH()
{
    printf("N in Const.h is %d\n", N);
    printf("Using PI in Const.h to calculate square of Radius 10 : %f\n", 10.0f * 10.f*PI);
    printf("Using MAX(a,b) in Const.h of 3,4 : %d\n", MAX(3,4));
    return 0;
}

long factorial(int n)
{
    long result = 1;
    int i = 1;
    for(;i<=n;i++){
        result *= i;
    }
    return result;
}

int printMessage(const char* msg)
{
    return puts(msg);
}

int usingScan()
{
    int a,b;
    int result = scanf("%d %d",&a,&b);
    printf("a+b=%d", a+b);
    return result;
}

int usingIf()
{
    int age;
    printf("please enter your age\n");
    scanf("%d", &age);
    if(age >= 18) {
        printf("adult");
    }else{
        printf("child");
    }
    return 0;
}

int usingSwitch()
{
    int age;
    printf("input your age : ");
    scanf("%d", &age);
    switch(age) {
        case 18 : printf("adult");
            break;
        case 17 : printf("children");
            break;
        default:
            printf("default");
    }

    return 0;
}

int usingWhileAndGetChar()
{
    int n = 0;
    printf("Input a String : ");
    while(getchar()!='\n'){
        n++;
    }
    printf("Number of characters :%d\n", n);
    return 0;
}

int usingCharArray()
{
    char msg[]="c.biangcheng.com";
    printf("%d %d", sizeof(msg), strlen(msg));
    return 0;
}

int usingStrCat()
{
//    char source[40]=" world", dst[20]="hello";
    char source[40] = " world";
    char dst[80] = "Hello";
    printf("%s",strcat(dst,source));
    return 0;
}

int usingStrCopy()
{
    char source[40]=" world", dst[20]="hello";
    printf("%s",strcpy(dst,source));
    return 0;
}

int indexofArray()
{
    int nums[10]={1,2,3,40,20,11,53,22,33,123};
    int i,item, subscript = -1;
    printf("Please input a number : ");
    scanf("%d", &item);
    for(i=0;i<sizeof(nums);i++){
        if(nums[i] == item) {
            subscript = i;
            break;
        }
    }

    return subscript;
}
