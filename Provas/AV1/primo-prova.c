#include <stdio.h>

int ehPrimo(n){
  int div=0;
  
  if(n==3 || n==2){
    div=2;
  } else {
    for(int i=1; i<=n; i++){
      if(n%i == 0){
      div++;
      }
    }
  }
  
  if(div==2){
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n,cont=0;
  scanf("%d", &n);
  // printf("%d", ehPrimo(n));

  if (n<=1 || n%2==0 || n%3==0 || n==2){
    printf("não");
  } else if(ehPrimo(n)){
    for(int i=1; i<=n; i++){
      if(ehPrimo(i) == 1){
        cont++;
      }     
    }
    if(ehPrimo(cont)){
      printf("sim");
    } else {
      printf("não");
    }
  }
  // printf("cont: %d\n", cont);
  
}


/// versao 1

// #include <stdio.h>

// int ehPrimo(n){
//   int div=0;
  
//   if(n<=1){
//     div=0;
//   } else if(n<=3){
//     div=2;
//   } else if(n%2==0 || n%3==0){
//     div=0;
//   } else {
//     for(int i=1; i<=n; i++){
//       if(n%i == 0){
//       div++;
//       }
//     }
//   }
  
//   if(div==2){
//     return 1;
//   } else {
//     return 0;
//   }
// }

// int main() {
//   int n,cont=0;
//   scanf("%d", &n);
//   // printf("%d", ehPrimo(n));
//   if(ehPrimo(n) == 1){
//     for(int i=1; i<=n; i++){
//       if(ehPrimo(i) == 1){
//         cont++;
//       }     
//     }
//   }
//   // printf("cont: %d\n", cont);
//   if(ehPrimo(cont)){
//     printf("sim");
//   } else {
//     printf("não");
//   }
  
// }