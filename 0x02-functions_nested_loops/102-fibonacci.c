#include <stdio.h>

int main(void)
{
int a = 1, b = 2, c;
printf("%d, %d, ", a, b);
for (int i = 2; i < 50; i++)
{
c = a + b;
printf("%d", c);
if (i != 49)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");
return (0);
}
