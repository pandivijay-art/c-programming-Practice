
#include <stdio.h>
#include <stdlib.h>

int main() {
     
     int n;
     int *mark;
     
     printf("How Many Students?");
     scanf(" %d",&n);
     mark=malloc(n * sizeof(int));
     
     for (int i=0;i<n;i=i+1){
         printf("Enter the mark %d is:",i+1);
         scanf("%d",&mark[i]);
     }
     printf("\n");
     
     for(int i=0;i<n;i=i+1){
         printf("the mark of student %d is:%d\n",i+1,mark[i]);
     }
    free(mark);
    return 0;
}
