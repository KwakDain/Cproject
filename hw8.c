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

    printf("5���� �Ǽ��� �Է��ϼ���:\n");
    for (int i = 0; i < 5; ++i) {
        printf("���� %d: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    double stdDev = calculateStandardDeviation(numbers, 5);
    printf("�Է��� ���ڵ��� ǥ������: %.4lf\n", stdDev);

    return 0;
}
