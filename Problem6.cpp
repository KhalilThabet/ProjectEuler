#include <iostream>
using namespace std;
long long squareSum(long long n){
    long long sum=0;
    for(long long i=1;i<=n;i++){
        sum+=i;
    }
    return sum*sum;
}


int main() {
    ios::sync_with_stdio(false);
    long long sum=0;
    for(long long i=1;i<101;i++){
        sum+=i*i;
    }
    cout<<(squareSum(100)-sum)<<endl;

    
    return 0;
}
