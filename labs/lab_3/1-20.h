#include <stdio.h>
#include <math.h>

void task_1(int variant) {
    int n = 0, a, b, c;
    for (int i = 111; i <= 999; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if ((a == b | a == c | b == c) && variant == 1)
            n++;
        if (((a == b && c != b) | (b == c && a != b) | (a == c && a != b)) && variant == 2)
            n++;
    }
    printf("%d", n);
}

void task_2() {
    int n = 0, a, b, c;
    for (int i = 102; i <= 987; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if (a != b && a != c && b != c)
            n++;
    }
    printf("%d", n);
}

void task_3() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

void task_4() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

//неопределенная ссылка на pow, нифига не работает...
//void task_5() {
//    int n, copy_n, s = 0;
//    scanf("%d", &n);
//    copy_n=n;
//    while (n > 0) {
//        s+=n%10;
//        n/=10;
//    }
//    if (pow(s,3) == pow(copy_n,2))
//        printf("True");
//    else
//        printf("False");
//}