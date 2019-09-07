#include<stdio.h>

int main()
{
    //menu bar
    int com;
    int val1=0;
    int val2=0;
    int res = 0;

    printf("Calculator prog v1.0 by Jean\n");
    while(1)
    {
        //printing menu
        printf("select from menu \n");
        printf("1 for add\n");
        printf("2 for mul\n");
        printf("3 for sub\n");
        printf("4 for dev\n");
        printf("0 for exit\n");
        scanf("%d",&com);
        //basic logic of prog
        if ( com==1 )
        {
            printf("enter val1\n");
            scanf("%d",&val1);
            printf("\n enter val2\n");
            scanf("$d",&val2);
            res=val1+val2;
            printf("\n res is %d",res);

        }
        else if(com==0) 
        {
            exit(0);
        }
    }

    return 0;
}
