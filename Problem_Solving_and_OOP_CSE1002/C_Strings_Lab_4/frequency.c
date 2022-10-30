#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[20],ch,a;
    int freq[26],c,len;
    for (c=0;c<20;c++)
    {
        freq[c]=0;
    }
    scanf("%[^\n]s",str);
    len=strlen(str);
    for (c=0;c<len;c++)
    {
        ch=str[c];
        if(isalpha(ch))
        {
            ch=tolower(ch);
            freq[ch-'a']++;
        }
    }
    a='a';
    for(c=0;c<20;c++)
    {
        printf("%c\t%d\n",a+c,freq[c]);
    }
}
