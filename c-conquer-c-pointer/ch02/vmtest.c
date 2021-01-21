#include <stdio.h>

int main(void)
{
    printf("start...\n");
    int hoge;
    char buf[256];

    printf("&hoge.. %p\n", &hoge);
    printf("input initial value:\n");
    fgets(buf, sizeof(buf), stdin);
    // sscanf(buf, "%d", &hoge);

    // for (;;)
    // {
    //     printf("hoge.. %d\n", hoge);
    //     getchar();
    //     hoge++;
    // }
    return 0;
}