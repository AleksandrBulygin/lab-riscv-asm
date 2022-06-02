#include <stdio.h>

#define N 4
#define M 4

void process(int n, int matrix[M][N], int str_num, int *result)
{
    *result = 0;
    for (int i = 0; i < n; i++) {
        *result += matrix[str_num - 1][i];
    }

}

int main(int argc, char** argv)
{
    int matrix[M][N];
    int result;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Input string number for find sum: ");
    int str_num;
    scanf("%d", &str_num);

    process(N, matrix, str_num, &result);


    printf("%d ", result);

    return 0;
}