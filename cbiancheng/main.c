#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int usingScan();
int usingIf();
int usingSwitch();
int usingWhileAndGetChar();
int usingCharArray();
int usingStrCat();
int usingStrCopy();
long factorial(int n);
int indexofArray();

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
    return indexofArray();
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
