#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    //menu bar
    int com;
    int val1 = 0;
    int val2 = 0;
    int res = 0;
    int flag = 0;

    printf("Calculator prog v1.0 by Jean\n");
    while(1)
    {
        //printing menu
        if(flag==0)
        {
        printf("\nselect from menu \n");
        printf("1 for add\n");
        printf("2 for mul\n");
        printf("3 for sub\n");
        printf("4 for dev\n");
        printf("0 for exit\n");
        scanf("%d",&com);
        flag=1;
        }
        //basic logic of prog
        if ( com==1 )
        {
            printf("\nenter val1\n");
            scanf("%d",&val1);
            printf("enter val2\n");
            scanf("%d",&val2);
            res=val1+val2;
            printf("\nres is %d\n",res);
	    sleep(1);    
	    flag=0;
	    
        }
	if( com==0 )
	{
		exit(0);
	}
	if(com==2)
	{
	    printf("\nenter val1\n");
	    scanf("%d",&val1);
	    printf("enter val2\n");
	    scanf("%d",&val2);
	    res=val1*val2;
	    printf("\nres is %d\n",res);
	    sleep(1);
	    flag = 0;  
	}
	if(com==3)
	{
	    printf("\nenter val1\n");
	    scanf("%d",&val1);
	    printf("enter val2\n");
	    scanf("%d",&val2);
	    res=val1-val2;
	    printf("\nres is %d\n",res);
	    sleep(1);
	    flag = 0;
   	}
	if(com==4)
	{
	    printf("\nenter val1\n");
	    scanf("%d",&val1);
	    printf("enter val2\n");
	    scanf("%d",&val2);
	    res=val1/val2;
	    printf("\nres is %d\n",res);
	    sleep(1);
	    flag = 0;

	}
}	
return 0;
}
