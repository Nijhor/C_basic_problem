#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ac,i;
    char name[30];
    double bal;

    FILE *cfptr;

    if((cfptr=fopen("E:\\life.txt","w"))==NULL)
    {
        printf("error");
    }
    else
    {
        printf("Enter Acc no,Name,Balance\n");
        scanf("%d%s%lf",&ac,&name,&bal);

    for (i=0;i<3;i++)
    {
        fprintf(cfptr,"Acc no     Name     Balance\n");
        fprintf(cfptr,"%d       %s       %.2f\n",ac,name,bal);
        scanf("%d%s%lf",&ac,&name,&bal);
    }
    fclose(cfptr);
    }
    return 0;
}
