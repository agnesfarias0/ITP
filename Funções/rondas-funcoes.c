#include <stdio.h>

int escreveHora(h,min,seg) {
  int h1,h2,h3,h4,seg2,seg3,seg4,min2,min3,min4;
  
  h1 = h+1;
  if(h1 >= 24) {
    h1 = h1-24;
  }
  printf("%02d:%02d:%02d\n", h1,min,seg);
  
  seg2 = seg+30;
  min2 = min+10;
  h2 = h+2;
  if(seg2 > 59){
    seg2 = seg2-60;
    min2 = min2+1;
  }
  if(min2 > 59){
    min2 = min2-60;
    h2 = h2+1;
  }
  if(h2 >= 24) {
    h2 = h2-24;
  }
  printf("%02d:%02d:%02d\n", h2,min2,seg2);

  seg3 = seg+50;
  min3 = min+40;
  h3 = h+4;
  if(seg3 > 59){
    seg3 = seg3-60;
    min3 = min3+1;
  }
  if(min3 > 59){
    min3 = min3-60;
    h3 = h3+1;
  }
  if(h3 >= 24) {
    h3 = h3-24;
  }
  printf("%02d:%02d:%02d\n", h3,min3,seg3);
  
  seg4 = seg+5;
  min4 = min+5;
  h4 = h+12;
  if(seg4 > 59){
    seg4 = seg4-60;
    min4 = min4+1;
  }
  if(min4 > 59){
    min4 = min4-60;
    h4 = h4+1;
  }
  if(h4 >= 24) {
    h4 = h4-24;
  }
  printf("%02d:%02d:%02d", h4,min4,seg4);

  return 0;
}


int main() {
  int h, min, seg;

  scanf("%d %d %d", &h, &min, &seg);
  escreveHora(h,min,seg);
  
}