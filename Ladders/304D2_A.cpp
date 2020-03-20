#include <stdio.h>
 
int main(){
  int k, n, w, cost = 0, amount = 0, actual_banana;
  scanf("%d %d %d", &k, &n, &w);
  for(int bananas = 1; bananas <= w; bananas++){
    actual_banana = k*bananas;
    cost += actual_banana;
  }
  if(cost > n){
    amount = cost - n;
  }
  printf("%d\n", amount);
  return 0;
}