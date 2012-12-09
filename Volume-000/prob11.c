#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  while (n--) {
    int x, result = 0;
    scanf("%d", &x);

    while (x >= 5) {
      x /= 5;
      result += x;
    }

    printf("%d\n", result);
  }

  return 0;
}
