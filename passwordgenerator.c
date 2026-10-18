#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, n;
    char character[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ""abcdefghijklmnopqrstuvwxyz""12345678910";
    int index;
    int upper_index , lower_index, digit_index;
     srand(time(NULL));
      upper_index = rand() % 26;
      lower_index = 26 + rand() % 26;
      digit_index = 52 + rand() % 10;
    printf("Enter the length of passward : ");
    scanf("%d", &n);
     
     printf("Password : ");
    for(i = 0; i < n; i++)
    {
     index = rand() % 62;  
     printf("%c", character[index]);
    }                 
    return 0;
}