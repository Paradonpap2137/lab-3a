#include <stdio.h>

int main() {
    int h,m,s,n;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("hour:%d\nminute:%d\nsecond:%d\nnext minute:",h,m,s);
    scanf("%d",&n);
    if (m+n>=60) {
        for (int i=m+n;i>=60;i-=60){
            h++;
            if (h>23) {
                h=0;
            }
            m=i-60;
        }
    }
    printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
    return 0;
}
