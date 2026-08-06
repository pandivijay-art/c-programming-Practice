
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int *att;
    
    printf("how many Students in our class?");
    scanf("%d",&n);
    
    att=malloc(n*sizeof(int));
    att=realloc(att,10*sizeof(int));
    att[0]=90;
    att[1]=100;
    att[2]=78;
    att[3]=89;
    att[4]=200;
    att[5]=30;
    att[6]=88;
    att[7]=46;
    att[8]=78;
    att[9]=56;
    
    for(int i=0;i<n;i=i+1){
        printf("the marks %d  is:%d \n",i+1,att[i]);
    }
  free(att);
    
    return 0;
}
