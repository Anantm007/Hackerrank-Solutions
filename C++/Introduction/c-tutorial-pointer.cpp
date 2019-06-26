#include <stdio.h>

void update(int *a,int *b) {
    int c=*a,d=*b;
        *a=*a+*b;
    *b=c-d;
    if(*b<0)
        *b*=-1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d
%d", a, b);

    return 0;
}
