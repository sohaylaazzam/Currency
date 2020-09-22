#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,sum=0,z;
for(i=1;i<1000;i++){
        sum=0;
 for(z=1;z<i;z++){
    if(i%z==0){
        sum=sum+z;
    }
   }
  if(sum==i){
    printf("%d",i);
    printf(" is a perfect number!\n");
  }

}
return 0;
}

