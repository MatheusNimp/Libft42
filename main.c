#include "libft.h"
#include <stdio.h>
#include <string.h>

/* Função auxiliar para strmapi */
char upper_index(unsigned int i, char c)
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

/* Função auxiliar para striteri */
void upper_index_iter(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    int ok;
    char buf[20];
    char dest[20];
    char **sp;
    int i;

    printf("=== PART 1 ===\n");

    printf("isalnum('A'): %s\n", ft_isalnum('A') ? "OK" : "KO");
    printf("isalnum('@'): %s\n", !ft_isalnum('@') ? "OK" : "KO");
    printf("isalpha('G'): %s\n", ft_isalpha('G') ? "OK" : "KO");
    printf("isalpha('1'): %s\n", !ft_isalpha('1') ? "OK" : "KO");
    printf("isdigit('5'): %s\n", ft_isdigit('5') ? "OK" : "KO");
    printf("isdigit('a'): %s\n", !ft_isdigit('a') ? "OK" : "KO");
    printf("isascii(127): %s\n", ft_isascii(127) ? "OK" : "KO");
    printf("isascii(200): %s\n", !ft_isascii(200) ? "OK" : "KO");
    printf("isprint(' '): %s\n", ft_isprint(' ') ? "OK" : "KO");
    printf("isprint(0x1F): %s\n", !ft_isprint(0x1F) ? "OK" : "KO");
    printf("tolower('G'): %s\n", ft_tolower('G')=='g' ? "OK" : "KO");
    printf("toupper('g'): %s\n", ft_toupper('g')=='G' ? "OK" : "KO");
    printf("strncmp(\"abc\",\"abd\",2): %s\n", ft_strncmp("abc","abd",2)==0 ? "OK" : "KO");
    printf("memcmp(\"abc\",\"abc\",3): %s\n", ft_memcmp("abc","abc",3)==0 ? "OK" : "KO");
    printf("atoi(\"-123\"): %s\n", ft_atoi("-123")==-123 ? "OK" : "KO");

    printf("strchr(\"Hello\",'e'): %s\n", ft_strchr("Hello",'e')==&"Hello"[1] ? "OK" : "KO");
    printf("strrchr(\"Hello\",'l'): %s\n", ft_strrchr("Hello",'l')==&"Hello"[3] ? "OK" : "KO");
    printf("strnstr(\"Hello\",\"ll\",5): %s\n", ft_strnstr("Hello","ll",5)==&"Hello"[2] ? "OK" : "KO");
    printf("strdup(\"abc\"): %s\n", strcmp(ft_strdup("abc"),"abc")==0 ? "OK" : "KO");

    ft_bzero(buf,10);
    ok = 1;
    for(i=0;i<10;i++) if(buf[i]!=0) ok=0;
    printf("bzero: %s\n", ok ? "OK" : "KO");

    ft_memset(buf,'A',5);
    ok = 1;
    for(i=0;i<5;i++) if(buf[i]!='A') ok=0;
    printf("memset: %s\n", ok ? "OK" : "KO");

    ft_memcpy(dest,"abc",4);
    printf("memcpy: %s\n", strcmp(dest,"abc")==0 ? "OK" : "KO");

    ft_memmove(dest+1,dest,3);
    printf("memmove: %s\n", dest[1]=='a' ? "OK" : "KO");

    {
        void *c = ft_calloc(5,sizeof(int));
        ok = 1;
        int *p = (int*)c;
        for(i=0;i<5;i++) if(p[i]!=0) ok=0;
        free(c);
        printf("calloc: %s\n", ok ? "OK" : "KO");
    }

    ft_strlcpy(dest,"Hello",sizeof(dest));
    ok = (strcmp(dest,"Hello")==0);
    ft_strlcat(dest,"!",sizeof(dest));
    ok = ok && (strcmp(dest,"Hello!") == 0);
    printf("strlcpy + strlcat: %s\n", ok ? "OK" : "KO");
    printf("strlen(\"Hello\"): %s\n", ft_strlen("Hello")==5 ? "OK" : "KO");

    printf("\n=== PART 2 ===\n");

    printf("substr(\"Hello\",1,3): %s\n", strcmp(ft_substr("Hello",1,3),"ell")==0 ? "OK" : "KO");
    printf("strjoin(\"Hello\",\"World\"): %s\n", strcmp(ft_strjoin("Hello","World"),"HelloWorld")==0 ? "OK" : "KO");
    printf("strtrim(\"  abc  \", \" \"): %s\n", strcmp(ft_strtrim("  abc  "," "),"abc")==0 ? "OK" : "KO");

    sp = ft_split("a,b,c", ',');
    ok = sp[0][0]=='a' && sp[1][0]=='b' && sp[2][0]=='c' && sp[3]==NULL;
    printf("split: %s\n", ok ? "OK" : "KO");
    for(i=0; sp[i]; i++) free(sp[i]);
    free(sp);

    printf("itoa(-123): %s\n", strcmp(ft_itoa(-123),"-123")==0 ? "OK" : "KO");
    printf("strmapi: %s\n", strcmp(ft_strmapi("abcdef", upper_index),"AbCdEf")==0 ? "OK" : "KO");

    {
        char iter_str[] = "abcdef";
        ft_striteri(iter_str, upper_index_iter);
        printf("striteri: %s\n", strcmp(iter_str,"AbCdEf")==0 ? "OK" : "KO");
    }

    printf("putchar_fd('X',1): OK\n"); ft_putchar_fd('X',1); ft_putchar_fd('\n',1);
    printf("putstr_fd(\"Hello FD\",1): OK\n"); ft_putstr_fd("Hello FD\n",1);
    printf("putendl_fd(\"Hello Endl\",1): OK\n"); ft_putendl_fd("Hello Endl",1);
    printf("putnbr_fd(-9876,1): OK\n"); ft_putnbr_fd(-9876,1); ft_putchar_fd('\n',1);

    return 0;
}

