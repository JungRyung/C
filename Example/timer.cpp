#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

static void print_remain_time(time_t initTime, int count){
    time_t timer;
    struct tm *t;
    t = localtime(&initTime);
    printf("Start Time : %dh/%dm/%ds\n", t->tm_hour,t->tm_min,t->tm_sec);
    
    timer = time(NULL);
    timer = timer - initTime;
    t = localtime(&timer);
    printf("Elapsed Time : %dh/%dm/%ds\n", t->tm_hour,t->tm_min,t->tm_sec);
    
    timer = timer*50000000/count;
    t = localtime(&timer);
    printf("Remaining Time : %dh/%dm/%ds\n", t->tm_hour,t->tm_min,t->tm_sec);
}

int main(void) {
  int i;
  int count = 0;
  time_t timer;
  //struct tm *t;

  timer = time(NULL);

  for(i=0; i<100; i++)
  {
    system("clear");
    count++;
    print_remain_time(timer,count);
    sleep(1);
  }

  return 0;
}