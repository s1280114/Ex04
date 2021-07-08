#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int Die[2], sum=0, i;
  char name[30];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n", name);

  printf("Rolling the dice...\n");

  srand((unsigned int)time(NULL));

  for(i=0;i<2;i++){
    
    Die[i] = 1 + rand() % 6;
    sum += Die[i];
  }
  
  printf("Die 1 : %d\nDie 2 : %d\nTotal value : %d\n", Die[0], Die[1], sum);

  return 0;
}
