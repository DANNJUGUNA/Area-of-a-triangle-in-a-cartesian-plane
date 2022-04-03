/*PROGRAM COMPUTING THE AREA AND THE PERIMETER OF A TRIANGLE PLOTED  
 *ON A CERTESIAN PLANE*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	// DECLARING THE VARIABLES TO BE USED
	float x1,x2,y1,y2,x3,y3,side1,side2,side3,P,s,a;
	int option;
	//ENTERING THE CO-ORDINATES
	printf("PLEASE ENTER THE COODINATES OF THE VERTICES OF THE TRIANGLE!!!\n");
    printf("enter the value of x1\n");
    scanf("%f",&x1);
    printf("enter the value for y1\n");
    scanf("%f",&y1);
    printf("enter the value of x2\n");
    scanf("%f",&x2);
    printf("enter the value of y2\n");
    scanf("%f",&y2);
    printf("enter the value of x3\n");
    scanf("%f",&x3);
    printf("enter the value of y3\n");
    scanf("%f",&y3);
    //PRINTING THE COODINATES OF THE VERTICES OF THE TRIANGLE
    printf("the co-ordinates are:\n");
    printf("\npoint\tx axis\t y axis\n");
    printf("'A' \t%.1f\t %.1f\n  ",x1,y1);
    printf("'B' \t%.1f\t %.1f\n",x2,y2);
    printf("'C' \t%.1f\t %.1f\n",x3,y3);
    //CALCULATING THE LENGTHS OF EACH SIDE
    side1=pow((x2-x1)*(x2-x1)+((y2-y1)*(y2-y1)),0.5);
      side2=pow((x3-x2)*(x3-x2)+((y3-y2)*(y3-y2)),0.5);
        side3=pow((x3-x1)*(x3-x1)+((y3-y1)*(y3-y1)),0.5);
 //PRINTING THE LENGTHS OF THE SIDES
            printf("The length of B to A is %.1f\n",side1);
               printf("The length of C to B  is %.1f\n",side2);
                      printf("The length of C to A is %.1f\n\n",side3);
         //GUIDANCE TO THE SELECTION OF OPTIONS
        printf("IN CHOOSING THE OPTIONS OPTION:\n\n");
        printf("OPTION 1:PERIMETER\n");
        printf("OPTION 2:AREA\n");
        printf("OPTION 3:AREA AND PERIMETER\n\n");
        printf("enter the option\n");
        scanf("%d",&option);
        //CALCULATING THE PERIMETER
        void adding()
        {
			P=side1+side2+side3;
			printf("The perimeter  of the triangle is %.1f\n",P);
		}
		//CALCULATING THE AREA USING HERO'S FORMULAE
		void multiply()
		{
			P=side1+side2+side3;
			s=P/2;
			a=pow((s*(s-side1)*(s-side2)*(s-side3)),0.5);
			printf("The area of the triangle is %.1f\n",a);
			
		}
		/*DECISION MAKING ON THE CHOICE MADE BY THE USER
		*RANGING FROM 1 TO 3 */
		 switch(option)
		 {
		 case 1:
		 {
         adding();
		 	break;
		 }
		 case 2:
		 {
           multiply ();
		 	break;
		 }
		 case 3:
		 {
		 	adding();
		 	multiply();
		 	break;
		 }
		 default: 
		 {
		 	printf("THE SYSTEM ACCEPTS OPTIONS 1 TO 3!!!\n");
		 }
		 }
        
    return 0;
}
