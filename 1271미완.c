#include <stdio.h>

void divide(unsigned a, unsigned b, unsigned *p){
   for(p[0]=0;a>=b;p[0]++) a-=b;
   a=(unsigned)(a*10);
   for(p[1]=0;a>=b;p[1]++) a-=b;
   a=(unsigned)(a*10);
   for(p[2]=0;a>=b;p[2]++) a-=b;
   a=(unsigned)(a*10);
   for(p[3]=0;a>=b;p[3]++) a-=b;
}

int main(){
   unsigned i[4];
   divide(65535,22,i);
   printf("%3u.%1u%1u%1u",i[0],i[1],i[2],i[3]);
}

int main(){
    long long m, n;
    scanf("%lld %lld", &m, &n);
    printf("%lld\n%lld",m/n,m%n);
}