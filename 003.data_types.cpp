#include <iostream>

using namespace std;

int main(void) {

    int x;
    long lx;
    char ch;
    float fl;
    double dfl;

    scanf("%d %ld %c %f %lf", &x, &lx, &ch, &fl, &dfl);

    printf("%d \n", x);
    printf("%ld \n", lx);
    printf("%c \n", ch);
    printf("%.2f \n", fl);
    printf("%.5lf \n", dfl);
    
    return 0;
}
