#include <stdio.h>

//lab_2_1:  123,00123,058,-5, 0xaf, 0X0
//lab_2_2:  1,71,034159E1F, .005, 1234.56789L

void lab_2_3(){
    int a, b, c, d, e,q,k,g,f;
    a = 2;  b = 13;  c = 7;  d = 19;  e = -4;
    q = b % e;
    k = c % d-e;
    g = b % - e * c;
    f = d / a % c;
    printf("q = %d, k = %d, g = %d, f = %d",q,k,g,f);
}
void lab_2_4(){
    int a, c;
    c = 5;

//    c++;
//    a = 2*c;

//    c+=1;
//    a = c+c;

//    ++c;
//    a = c+c;

    a = (c+=1)+c;

    printf("c = %d, a = %d",c,a);
}
void lab_2_5() {
    int a, c;
    c = 5;

//    --c;
//    a = c/2;

//    a = --c/2;

//    a = c--/2;

//    a = (c = c - 1)/2;

    a = (c -= 1)/2;


    printf("c = %d, a = %d",c,a);
}
void lab_2_7() {
    int a, b, c, res;   a = 2;  b = 6;  c = 3;
//    res = -  -  - a;
//    res = a --- b;
    printf("res = %d",a);
}
void lab_2_8() {
    int  i,  j,  k, m;  char c, d;   i = 1;  j = 2;  k = -7; m = 0; c = 'w';
    m = - i - 5 * j >= k+1;
//    i + j++  + k = = -2*j;
//    m = 3 < j < 5;
//    m = 3 = = j < 5;
//    m = = c = 'w'
//    m = c != 87;
//    m = c = !87;
//    m = ! c = 87;
//    m = !c+87;
//    ! m = =c + 87;
//    m ! = c + 87;
//    k = = j - 9 = = i;
//    k *= 3 + j;
//    i + j = !k;
//    i += ++ j + 3;
//    k %= m = 1 + n / 2;
//    1 + 3 * n += 7 / 5;
//    1 + 3 * (n += 7) / 5;
    printf("res = %d",m);
}
//lab_2_9:
//      not (not x) = x, не эквивалентно !, так как два отрицания дает то же число. Ответ: неверно
//      x and true = x , and можно заменить на &&. Ответ: верно

void lab_2_14() {
    double d;
    float f;
    long lng;
    int i;
    short s;
    s = i = lng = f = d = 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    d = f = lng = i = s = 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    s = i = lng = f = d = 1000000 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    d = f = lng = i = s = 1000000 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    lng = s = f = i = d = 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    f = s = d = lng = i = (double) 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    s = i = lng = f = d = 100 / (double) 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    f = s = d = lng = i = (double) 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    i = s = lng = d = f = (double) (100 / 3);
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
}