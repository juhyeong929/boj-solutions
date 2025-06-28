#include <stdio.h>

int main(){
  int A;
  int B;

  int n;
  scanf("%d",&n);

  for(int i = 0; i<n; i++){
    scanf("%d %d\n",&A,&B);
    printf("%d\n",A+B);
    }

    return 0;
}
