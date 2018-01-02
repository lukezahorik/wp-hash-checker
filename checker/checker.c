//First version of checking if a user is compromised
//This is mostly just to make sure I'm using the API properly
//By: Lucas Zahorik

//includes
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//definitions
#define SERVICE wp-hash-checker
#define USERAGENT wp-hash-checker

char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1)+strlen(s2)+1);//+1 for the null-terminator
    //in real code you would check for errors in malloc here
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(void)
{
  char email[30];
  printf("Enter the email you'd like to check: ");
  scanf("%s", email);
  printf("You entered %s\n", email);
  char *emailPass;
  emailPass = concat("GET https://haveibeenpwned.com/api/v2/breachedaccount/", email);
  printf("emailpass is %s\n", emailPass);
  //hashcheck(email);
  return 0;
}