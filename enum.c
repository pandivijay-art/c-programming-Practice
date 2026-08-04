
#include <stdio.h>

  enum day{
      Sunday=10,
      Monday,
      Tuesday,
      Wednesday,
      Thursday,
      Friday,
      Saturday=20
  };
  
int main() {
 enum day weekend1=Sunday;
 enum day weekend2=Saturday;
 
 printf("the weekend 1 is:%d \n",weekend1);
 printf("the weekend2 is:%d \n",weekend2);
    return 0;
}
