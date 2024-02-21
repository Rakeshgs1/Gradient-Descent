#include <stdio.h>

float gradw1(float x1, float x2, float y, float w1, float w2) {
    float diffw1 = (2 * y - ((w1 * x1) + (w2 * x2)) * (-x1));
    float gw1 = w1 - (0.01 * diffw1);
    return gw1;
}

float gradw2(float x1, float x2, float y, float w1, float w2) {
    float diffw2 = (2 * y - ((w1 * x1) + (w2 * x2)) * (-x2));
    float gw2 = w2 - (0.01 * diffw2);
    return gw2;
}

int main() {
    float arr[4][3];
    for (int i = 0; i < 4; i++) {
        printf("Enter the values x1 x2 y : ");
        scanf("%f %f %f", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    float w1, w2;
    printf("Enter w1 : ");
    scanf("%f", &w1);
    printf("Enter w2 : ");
    scanf("%f", &w2);

    for (int i = 0; i < 4; i++) {
        float new_gw1 = gradw1(arr[i][0], arr[i][1], arr[i][2], w1, w2);
        float new_gw2 = gradw2(arr[i][0], arr[i][1], arr[i][2], w1, w2);
        printf("\ngradient of w1: %f", new_gw1);
        printf("  gradient of w2: %f", new_gw2);
    }

    return 0;
}