/* prog8_28, �ϥΦۭq�����Y��area.h */
#include <stdio.h>
#include <stdlib.h>
#include "area.h" 
int main(void)
{
   float base,height,r,leagth;
	int number=0;
   printf("Please input you want calculation shape number:\n1.Circle\n2.Triangle\n3.Rectangle\n");
   scanf("%d",&number);
   switch(number){
	case 1:
		printf("Please input r:\n");
		scanf("%f",&r);	
		printf("Circle area = %.2f\n",CIRCLE(r));
		break;
	case 2:
		printf("Please input base:\n");
		scanf("%f",&base);
		printf("Please input height:\n");
		scanf("%f",&height);
		printf("Triangle area = %.2f\n",TRIANGLE(base,height));
		break;
	case 3:
		printf("Please input leangth:\n");
		scanf("%f",&leagth);
		printf("Please input height:\n");
		scanf("%f",&height);
		printf("Rectangle area = %.2f\n",RECTANGLE(leagth,height));
		break;
   }
   system("pause");
   return 0;
}

