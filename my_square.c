#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av)
{
    //int x = atoi(av[1]);
    //int y = atoi(av[2]);
    int i=0;
    int j=0;
    if(ac != 3)
    {    return 0;}
    else{
        int x = atoi(av[1]);
        int y = atoi(av[2]);
    for (i = 1; i <= y; i++) 
    { 
        for (j = 1; j <= x; j++) 
        { 
            if (i==1 && j==1)              
                {
                    printf("o");     
                    continue;
                }
            if (i==1 && j==x)
            {
                printf("o");     
                continue;
            }
            if (i==y  && j==x)
            {
                printf("o");     
                continue;
            }
            if (i==y  && j==1)
            {
                printf("o");     
                continue;
            }
            if(i!= 1 && j==1)
            {
                printf("|");
                continue;
            }  
            if(i== 1 && j!=1)
            {
                printf("-");
                continue;
            }
            if(i== x && j!=1)
            {
                printf("-");
                continue;
            }
            if(i!= 1 && j==y)
            {
                printf("|");
                continue;
            }  
            else
                printf(" ");             
        } 
        printf("\n"); 
    }
}

}
