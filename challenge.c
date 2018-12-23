/*
To find the total number of jumps need for a monkey-man to escape from a jail of several walls
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,n,N[10],result=0,temp,i;
    /*
    x is height that a monkey-man can jump
    y is the height that a monkey-man falls after each jump
    n is number of walls
    N in array is height of each walls(n)
    */
    printf("Enter jump height, fall height and number of walls one by one:\n");
    scanf("%d %d %d",&x,&y,&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the height of wall %d:",i+1);
        scanf("%d",&N[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=x-y;
        result+=1;
        while(temp<=N[i])
        {
            if((temp+y)>=N[i])
            {
                break;
            }
            result+=1;
            temp*=2;
        }
    }
    printf("Therefore %d jumps need to escape from the jail",result);
    getch();
}
