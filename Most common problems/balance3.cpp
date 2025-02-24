#include <stdio.h>

int main() {
long long n, c = 0;
while (scanf("%lld", &n), n) {
c++;
int sum = 0, t;
for (int i = 1; i <= n; i++) {
scanf("%lld", &t);
if (t > 0)
sum++;
else
sum--;
}
printf("Case %lld: %lld\n", c, sum);
}
return 0;
}
