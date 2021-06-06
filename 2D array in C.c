#include<stdio.h>
int main()
{
    /* 2D array declaration*/
    int arry[2][3];
    /*Counter variables for the loop*/
    int i,j;
    for(i=0;i<2;i++){
      for(j=0;j<3;j++){
         printf("Enter value for Index[%d][%d]: ",i,j);
         scanf("%d",&arry[i][j]);
      }
    }
    //Displaying array elements
    printf("2D array elements:\n");
    for(i=0;i<2;i++){
      for(j=0;j<3;j++){
         printf("%d ",arry[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
