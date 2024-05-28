int m = 10e9+7;

int fast_exp(int x, int n){
    int res = 1;

    while(n>0){
        if(n&1){
            res = (1LL * (res) * (x)%m )%m;
        }
        
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1;

        // dividing n by 2 using bit manipulation
        
    }
}