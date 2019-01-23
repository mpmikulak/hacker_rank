#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    // 3 12345678912345 a 334.23 14049.30493
    // int, long, char, float, double
    int i;
    long li;
    char ch;
    float fl;
    double lf;

    scanf("%d %ld %c %f %lf", &i, &li, &ch, &fl, &lf);
    printf("%d\n", i);
    printf("%ld\n", li);
    printf("%c\n", ch);
    printf("%.3f\n", fl);
    printf("%.9lf\n", lf);

    return 0;
}
