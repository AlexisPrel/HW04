long fibonacci(int N){
    long i, j, k;
    i = 0; /* F0 */
    j = 1;  /* F1 */
    if(N == 0)
        return 0;
    else if(N==1)
        return 1;
    else
        {
            for(int n = 2; n <= N; n++)
            {
                k = i +j; /* Fn  */
                i = j; 
                j = k;
            }
            return k;
        }
}
