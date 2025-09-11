#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "trig.h"

int str_str(char *str, char *to_find)
{
    int i = 0;
    int j;
    
    while (str[i])
    {
        j = 0;
        while (str[i + j] && str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int st_cmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

char *str_copy(char *src, char *dest)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int str_len(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *str_history(char *src , char *dest)
{
    int i = 0;
    int j = 0;
    while (dest[i])
        i++;

    while (src[j])
    {
        dest[j + 1] = src[j];
    }
    dest[j] = '\0';
    return dest ; 
}

int main()
{
    char *ex = "exit";
    char *trig[20] = {"sad", "sympathy", "angry", "frustration", "happy", "joy", "confused", "uncertainty", "fear", "anxiety", "gratitude", "appreciation", "curiosity", "interest", "love", "affection", "humor", "playfulness", "hi","hello"};
    char str1[200];
    char history[400]; 
    char stock_ex[200];
    int i = 0;
    srand(time(NULL));
    

    while (i < 300)
    {
        printf(" \n you :");
        fgets(str1, 200, stdin);

        int len = str_len(str1);

        if (len > 0 && str1[len - 1] == '\n')
            str1[len - 1] = '\0';

        str_copy(str1, stock_ex); 

        if (st_cmp(stock_ex, ex) == 0)
        {
            printf("GOOD BYE\n");
            return 0;
        }

        int f = 0;
        int found = 0; 
        int random  = rand();
        
        while (f < 20)
        {
            if (str_str(stock_ex, trig[f]) == 1)
            {
                printf("%s", all_answers[f][random % 3]);
                printf("%s", all_questions[f][random % 3]);
                found = 1; 
            }
            f++;
        }
        if (found == 0)
        {
            printf("I didn't understand, could you please clarify?\n");
        }
        
        i++;
    }
    printf("salat lik internet xargi bax tkml");
    return 0;
}
