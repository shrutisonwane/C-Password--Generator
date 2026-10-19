#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, n, j;
    char password[100];  // stores generated password
    char temp;
    char character[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ""abcdefghijklmnopqrstuvwxyz""12345678910";
    int index;
    int upper_index , lower_index, digit_index;
     srand(time(NULL));
      upper_index = rand() % 26;
      lower_index = 26 + rand() % 26;
      digit_index = 52 + rand() % 10;
    printf("Enter the length of passward : ");
    scanf("%d", &n);
     
     if(n>=3 && n<=99)  // allows length from 3 to 99
     {
      password[0] = character[upper_index];
      password[1] = character[lower_index];
      password[2] = character[digit_index];
      
        for(i = 3; i < n; i++)
      {
       index = rand() % 62;  
       password[i] = character[index];
      } 

      for (i = n-1; i > 0; i--)    // fisher yates shuffle 
      {
        j = rand() % (i+1);  
        temp = password[i];
        password[i] = password[j];
        password[j] = temp;
      }   
      password[n]='\0';
      printf("password : %s\n", password);   
     }
     else
     {
       printf("Password length must be between 3 and 99.");
     } 
    return 0;
}