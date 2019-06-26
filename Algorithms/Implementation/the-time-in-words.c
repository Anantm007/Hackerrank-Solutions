#include<stdio.h>


int main()
{
    
int h,m; 
    
    scanf("%d%d",&h,&m);

    char nums[][64] = { "zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine",
                        "ten", "eleven", "twelve", "thirteen",
                        "fourteen", "fifteen", "sixteen", "seventeen",
                        "eighteen", "nineteen", "twenty", "twenty one",
                        "twenty two", "twenty three", "twenty four",
                        "twenty five", "twenty six", "twenty seven",
                        "twenty eight", "twenty nine",
                      };
 
    if (m==0)
        printf("%s o' clock
",nums[h]);
 
    else if (m==1)
        printf("one minute past %s
", nums[h]);
 
    else if(m==59)
          printf("one minute to %s
", nums[(h % 12) + 1]);
 
    else if(m==15)
        printf("quarter past %s
", nums[h]);
 
    else if(m==30)
        printf("half past %s
", nums[h]);
 
    else if(m==45)
        printf("quarter to %s
", nums[(h % 12) + 1]);
 
    else if(m<=30)
        printf("%s minutes past %s
", nums[m], nums[h]);
 
    else if(m>30)
        printf("%s minutes to %s
", nums[60 - m],
                                     nums[(h % 12) + 1]);

   return 0;
    
}


  
