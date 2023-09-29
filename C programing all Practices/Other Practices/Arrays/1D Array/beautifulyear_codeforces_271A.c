#include <stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    if (1000 <= y && y <= 9000){
        for (int i = y + 1; i <= 9999; i++){
            int a, b, c, d;
            a = i % 10;
            b = (i / 10) % 10;
            c = (i / 100) % 10;
            d = (i / 1000) % 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d){
                printf("%d", i);
                break;
            }
            else
                continue;
        }
    }
    return 0;
}