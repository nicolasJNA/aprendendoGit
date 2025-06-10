#include <stdio.h>
#include <graphics.h>
#include <string.h>

void convergen(int line, char *message);
int main(){

  return 0;
}
void convergen(int line, char *message){
  int i, j;
  for(i =1; j=strlen(message); i<j; i++; j--){
    _settextposition(line, i);
    printf("%c", message[i - 1]);
    _settextposition(line, j);
    printf("%c", message[j - 1]);
  }
}