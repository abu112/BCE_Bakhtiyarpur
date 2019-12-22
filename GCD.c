#include <stdio.h>

typedef long long ll;

ll GCD(ll a, ll b){
    
    if(b == 0) return a;
    else GCD(b, a%b);
    
}

int main(){
    
    ll x = 0;
    ll y = 0;
    
    scanf("%lld %lld", &x, &y);
    printf("GCD of %lld and %lld is %lld\n", x, y, GCD(x,y));
    
    
    return 0;
}
