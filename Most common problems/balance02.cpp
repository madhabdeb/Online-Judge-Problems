#include <stdio.h>

int main() {
int n, c = 0;
while (scanf("%d", &n), n) {
c++;
int sum = 0, t;
for (int i = 0; i < n; i++) {
scanf("%d", &t);
if (t > 0)
sum++;
else
sum--;
}
printf("Case %d: %d\n", c, sum);
}
return 0;
}
