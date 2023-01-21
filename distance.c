#include<stdio.h>
#include<math.h>
main(){
  double x1,x2,y1,y2,result;

   for( ; ;)
    {
      printf("\n enter x1 y1 \t\n");
          scanf("%lf",&x1);
           if(x1==-1)
            break;

      scanf("%lf",&y1);

       printf("\n enter x2 y2 \t \n");
       scanf("%lf%lf",&x2,&y2);




      result=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
      if(result>10)
           printf("\n\tFar\n");
     if(result<=10)
           printf("\n\tNear\n");

    }







}
