#include <stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  int v;
  int count = 0;

  int array[N];

  for (int i =0 ; i < N; i++){
    scanf("%d ", &array[i]);
  }
  scanf("%d",&v);

  for(int i = 0; i < N; i++){
    if(array[i] == v){
      count++;
    }
  }

  printf("%d", count);
  return 0;
}