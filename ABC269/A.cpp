#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, out_num;
    string takashi = "Takahashi";

    scanf("%d %d %d %d", &a, &b, &c, &d);

    out_num = (a + b) * (c - d);

    printf("%d\n%s\n", out_num, takashi.c_str());

    return 0;
}