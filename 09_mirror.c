// 9. Reverse a string to display it in mirror format
#include <stdio.h>
#include <string.h>
int main() {
char s[101], i, n;
printf("Enter code name: ");
scanf("%s", s);
n=strlen(s);
printf("Mirror code name: ");
for(i=n-1; i>=0; i--) printf("%c", s[i]);
printf("\n");
return 0;
}
