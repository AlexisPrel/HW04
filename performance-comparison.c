#include <stdio.h>
#include <time.h>

#define N 45

long fibonacci(int n);

int main(void)
{
    int i;
    long l;
    
    clock_t begin, end;
    double time_spent;
    begin = clock();
    
    for(i=0; i < N; i++)
    {
        l = fibonacci(i);
        printf("%4d %201d\n",i,1);
    }
    
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f sec\n", time_spent);
    printf("%ld\n",l);   
    return 0;
}