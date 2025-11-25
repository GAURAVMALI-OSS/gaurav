#include <stdio.h>
int main() {
    int n, i, flag = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag && n > 1)
        printf("Prime");
    else
        printf("Not Prime");
}
