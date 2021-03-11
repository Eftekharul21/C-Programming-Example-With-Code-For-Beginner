#include <stdio.h>
int factorial(int n)
{
   int f;
   for(f=1;n>1;n--)
   f=f*n;
   return f;
}
int npr(int n,int r)
{
   return factorial(n)/factorial(n-r);
}
int ncr(int n,int r)
{
   return npr(n,r)/factorial(r);
}
int main()
{
   int n,r;

   printf("Enter the value of n: ");
   scanf("%d",&n);
   printf("Enter the value of r: ");
   scanf("%d",&r);
   printf("\nPermutation of %dP%d = %d\n",n,r,npr(n,r));
   printf("Combination of %dC%d = %d\n",n,r,ncr(n,r));
}
