#include <stdio.h>

int power(int x, int level) {
    int n = 0, output = 1;
    if (level == 0)
        return 1;
    else {
        while (level > n) {
            output *= x;
            n += 1;
        }
    }
    return output;
}

int is_prime(int n) {
    if (n > 1) {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return 0;
        return 1;
    } else
        return 0;
}