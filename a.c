//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

/*
int main(){
    printf("请输入下降次数\n");
    float height = 100;
    int n = 0;
    float bounce = height / 2;
    float sum = 100;
    scanf("%d",&n);
    for(int i= 2;i <= n;i++){
        sum += 2 * bounce;
        bounce = bounce / 2;
    }
    printf("一共经过%f米，第%d次反弹%f米",sum,n,bounce);
}*/

/*
int main(){
    int day = 9;
    int peach = 1;
    while(day != 0){
        peach = (peach + 1) * 2;
        day--;
    }
    printf("总共%d个桃子",peach);
}*/

/*
int main(){
    int i = 0;
    int j = 0;
    int k = 0;
    for(i = 1;i < 5;i++){
        for(j = 0;j < 5-i;j++){
            printf(" ");
        }
        for(k = 0;k < 2 * i - 1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i = 0;i <= 2;i++){
        for(j = 0;j <= i+1;j++){
            printf(" ");
        }
        for(k = 0;k <= 4-2*i;k++){
            printf("*");
        }
        printf("\n");
    }
}*/

/*
int main(){
    float a = 1;
    float b = 2;
    float sum = 0;
    for(int i = 0;i < 20;i++){
        float temp = b;
        sum += b / a;
        b = a + b;
        a = temp;
    }
    printf("%f",sum);
}*/

/*int main(){
    int i = 0;
    long double sum1 = 1;
    long double sum2 = 0;
    for(i = 1;i <= 20;i++){
        sum1 *= i;
        sum2 += sum1;
    }
    printf("%Lf",sum2);
    return 0;
}*/

/*long double a(int n){
    long double sum = 0;
    if(n == 1){
        return 1;
    }else{
        return sum = n * a(n -1);
    }
    return sum;
}
int main(){
    printf("请输入想要计算的阶乘\n");
    int f = 0;
    scanf("%d",&f);
    printf("%Lf",a(f));
}*/

/*
void plain(int n){
    char next;
    if(n <= 1){
        next = getchar();
        printf("相反顺序输出结果:");
        putchar(next);
    }else{
        next = getchar();
        plain(n-1);
        putchar(next);
    }
}
int main(){
    int i = 5;
    printf("请输入5个字符\n");
    plain(10);
}*/

/*int years(int n){
    if(n == 1){
        return 10;
    }else{
       return years(n-1) + 2;
    }
}
int main(){
    printf("%d",years(5));
}*/

/*
int main(){
    int num;
    printf("请输入数字\n");
    scanf("%d",&num);
    if(num > 9999){
        int wannum = num /10000;
        int qiannum = num /1000 % 10;
        int bainum = num /100 % 10;
        int shinum = num % 100 / 10;
        int genum = num % 10;
        printf("%d%d%d%d%d",genum,shinum,bainum,qiannum,wannum);
        return 0;
    }
    if(num > 999){
        int qiannum = num /1000 % 10;
        int bainum = num /100 % 10;
        int shinum = num % 100 / 10;
        int genum = num % 10;
        printf("%d%d%d%d",genum,shinum,bainum,qiannum);
        return 0;
    }
    if(num > 99){
        int bainum = num /100 % 10;
        int shinum = num % 100 / 10;
        int genum = num % 10;
        printf("%d%d%d",genum,shinum,bainum);
        return 0;
    }
    if(num > 9){
        int shinum = num % 100 / 10;
        int genum = num % 10;
        printf("%d%d",genum,shinum);
        return 0;
    }
}*/

/*
int main()
{
    printf("请输入任意一个数字\n");
    int num = 0;
    scanf("%d",&num);
    int wannum = num / 10000;
    int qiannum = num / 1000 % 10;
    int bainum = num / 100 % 10;
    int shinum = num / 10 % 10;
    int genum = num % 10;
    if(wannum == genum)
    {
        if(qiannum == shinum && genum == wannum)
        {
            printf("%d是回文数",num);
        }
    }else
    {
        printf("不是回文数");
    }
}*/
