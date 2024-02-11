#include <stdio.h>
#include <stdlib.h>

int main() {
   int rows,cols;

   printf("Enter the number of rows: ");
   scanf("%d",&rows);

   printf("Enter the number of columns: ");
   scanf("%d",&cols);
   int *array = (int *)malloc(rows * cols *sizeof(int));

   if (array ==NULL) {
       printf("Memory allocation failed!\n");
       return 1;
   }

   
   for (int i=0;i<rows;i++) {
       for (int j=0;j<cols;j++) {
           printf("Enter value for element [%d][%d]: ",i,j);
           scanf("%d",&array[i * cols + j]);
       }
   }
   printf("\nArray elements:\n");
   for (int i=0;i<rows;i++) {
       for (int j=0;j<cols;j++) {
           printf("%d ", array[i * cols + j]);
       }
       printf("\n");
}
   free(array);

   return 0;
}
