#include <stdio.h>
#include <time.h>
#define N 20
int main ()
{
srand((int)time(NULL));
int i;
int vt[N];
int *pvt;
pvt = vt;
for (i= 0; i<N; i++)
{
    pvt=1+rand()%100; 
    printf ("Elemento %d del vector:  ",i);
    printf("  %d \n", pvt++);
}

return 0;
}