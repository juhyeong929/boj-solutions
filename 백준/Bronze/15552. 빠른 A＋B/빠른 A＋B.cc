#include <stdio.h>

int main(){
  int A,B;
  int total = 0;
  int N;
  scanf("%d",&N);

  for(int i = 1; i<=N; i++){
    scanf("%d %d",&A, &B);
    total = A+B;
    printf("%d\n",total);
    }

  return 0;
}
