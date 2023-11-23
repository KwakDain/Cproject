#include <stdio.h>
#include <math.h>

double calculateStandardDeviation(double arr[], int n) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; ++i) {
        standardDeviation += pow(arr[i] - mean, 2);
    }
    return sqrt(standardDeviation / n);
}

int main() {
    double numbers[5];

    printf("5개의 실수를 입력하세요:\n");
    for (int i = 0; i < 5; ++i) {
        printf("숫자 %d: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    double stdDev = calculateStandardDeviation(numbers, 5);
    printf("입력한 숫자들의 표준편차: %.4lf\n", stdDev);

    return 0;
}
