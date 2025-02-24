#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char str[2000];
	while(gets(str)) {
		if(strcmp(str, "DONE") == 0)
			break;
		int d = strlen(str), flag = 0;
		int i, j;
		for(i = 0, j = d-1; i < j; i++, j--) {
			while(i < d && isalpha(str[i]) == 0)	i++;
			while(j >= 0 && isalpha(str[j]) == 0)	j--;
			if(str[i] >= 'a')	str[i] += -'a'+'A';
			if(str[j] >= 'a')	str[j] += -'a'+'A';
			if(i < j && str[i] != str[j]) {
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			puts("You won't be eaten!");
		else
			puts("Uh oh..");
	}
    return 0;
}
