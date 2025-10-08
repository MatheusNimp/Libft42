#include <stdio.h>
#include <string.h>   // strlen, strchr
#include <ctype.h>    // isalpha, isdigit, isalnum, isascii, isprint, tolower, toupper
#include "libft.h"

int main(void)
{
    char *str;

    printf("===== TESTE ft_isalpha =====\n");
    printf("c='A': ft=%d, libc=%d\n", ft_isalpha('A'), !!isalpha('A'));
    printf("c='z': ft=%d, libc=%d\n", ft_isalpha('z'), !!isalpha('z'));
    printf("c='1': ft=%d, libc=%d\n", ft_isalpha('1'), !!isalpha('1'));

    printf("\n===== TESTE ft_isdigit =====\n");
    printf("c='5': ft=%d, libc=%d\n", ft_isdigit('5'), !!isdigit('5'));
    printf("c='a': ft=%d, libc=%d\n", ft_isdigit('a'), !!isdigit('a'));

    printf("\n===== TESTE ft_isalnum =====\n");
    printf("c='A': ft=%d, libc=%d\n", ft_isalnum('A'), !!isalnum('A'));
    printf("c='9': ft=%d, libc=%d\n", ft_isalnum('9'), !!isalnum('9'));
    printf("c='*': ft=%d, libc=%d\n", ft_isalnum('*'), !!isalnum('*'));

    printf("\n===== TESTE ft_isascii =====\n");
    printf("c=65 (A): ft=%d, libc=%d\n", ft_isascii(65), !!isascii(65));
    printf("c=200:   ft=%d, libc=%d\n", ft_isascii(200), !!isascii(200));

    printf("\n===== TESTE ft_isprint =====\n");
    printf("c='A': ft=%d, libc=%d\n", ft_isprint('A'), !!isprint('A'));
    printf("c=31:  ft=%d, libc=%d\n", ft_isprint(31), !!isprint(31));
    printf("c=127: ft=%d, libc=%d\n", ft_isprint(127), !!isprint(127));

    printf("\n===== TESTE ft_toupper / ft_tolower =====\n");
    printf("tolower('A'): ft=%c, libc=%c\n", ft_tolower('A'), tolower('A'));
    printf("tolower('z'): ft=%c, libc=%c\n", ft_tolower('z'), tolower('z'));
    printf("toupper('a'): ft=%c, libc=%c\n", ft_toupper('a'), toupper('a'));
    printf("toupper('Z'): ft=%c, libc=%c\n", ft_toupper('Z'), toupper('Z'));

    printf("\n===== TESTE ft_strlen =====\n");
    str = "Hello, 42 Porto!";
    printf("\"%s\": ft=%zu, libc=%zu\n", str, ft_strlen(str), strlen(str));
    str = "";
    printf("\"%s\": ft=%zu, libc=%zu\n", str, ft_strlen(str), strlen(str));

    printf("\n===== TESTE ft_strchr =====\n");
    str = "Hello, 42 Porto!";
    printf("Procurando 'o': ft=%s, libc=%s\n", ft_strchr(str, 'o'), strchr(str, 'o'));
    printf("Procurando 'z': ft=%s, libc=%s\n", ft_strchr(str, 'z'), strchr(str, 'z'));
    printf("Procurando 'H': ft=%s, libc=%s\n", ft_strchr(str, 'H'), strchr(str, 'H'));
    printf("Procurando '\\0': ft=%p, libc=%p\n", ft_strchr(str, '\0'), strchr(str, '\0'));

    return 0;
}

