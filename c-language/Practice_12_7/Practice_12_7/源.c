#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int score[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &score[i]);
    }
    int score[10] = { 98,100,99,97,95,99,98,97,96,100 };
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (score[n-1-j] < score[n-2-j]) {
                int tmp = score[n - 2 - j];
                score[n - 2 - j] = score[n - 1 - j];
                score[n - 1 - j] = tmp;
            }
        }
    }
    int difValue = score[n - 1] - score[0];
    printf("%d", difValue);
    return 0;
}