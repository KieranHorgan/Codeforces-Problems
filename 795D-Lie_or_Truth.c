
#include <stdio.h>
int main()
{
  int n, l, r;
  int a[100005], b[100005];
  scanf("%d %d %d\n", &n, &l, &r);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }
  for(int i = 1; i <= n; i++) {
    scanf("%d", &b[i]);
  }

  int isTrue = 1;
  for(int i = 1; i < l; i++) {
    if(a[i]!=b[i]) isTrue=0;
  }
  for(int i = r+1; i <= n; i++) {
    if(a[i]!=b[i]) isTrue=0;
  }

  if(isTrue)
    printf("TRUTH\n");
  else
    printf("LIE\n");
}