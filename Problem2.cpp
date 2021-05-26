unsigned long long sumFibonnaci(unsigned long long range,unsigned long long x=1,unsigned long long y=2){
    unsigned long long sum=0;
    while (y<range+1){
        if (y % 2 == 0) sum += y;
        unsigned long long b=y;
        
        y+=x;
        x=b;
    }
    return sum;
}
