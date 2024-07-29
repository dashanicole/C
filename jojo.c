#include <stdio.h>

int main(){
int a,b,c,L;
printf("Input three integers: \n");
scanf("%d%d%d",&a,&b,&c);

/*L = (a>b)?a:b;
L = (L>c)?L:c;
*/
if(a>b)
L = a;
else
L = b;
if(L>c)
L = L;
else
L = c;
printf("The largest number among the three is %d.", L);

return 0;
}

