#include<stdio.h>
int main()
{
    static int i=5;
    if(--i){
        printf("=%d\n",i);
        main();
        printf("+%d\n",i);
    }  
}