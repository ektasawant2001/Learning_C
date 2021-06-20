//SWITCH CASE IN C

#include<stdio.h>
int main()
{
  int a,b,add,sub,mul,div,op;
  printf("\nEnter value of a,b:");
  scanf("%d%d",&a,&b);

  while(op!=5)
 {
   printf("\n1.Addition\n2.substraction\n3.multiplication\n4.Division"); printf("\nEnetr your choice:");
   scanf("%d",&op);
   switch(op)
   {
     case 1:
            add=a+b;
            printf("\nAddition of a and b:%d",add);
            break;

     case 2:
            sub=a-b;
            printf("\nsubstraction of a and b:%d",sub);
            break;

     case 3:
            mul=a*b;
            printf("\nmultiplication of a and b:%d",mul);
            break;
    case 4:
           div=a/b;
           printf("\nDivision of a and b:%d",div);
           break;

    case 5:
            printf("\n Exit");
  }
 }
    return 0;
}
