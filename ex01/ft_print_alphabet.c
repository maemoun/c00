#include <unistd.h>

void    ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrtuvwxyz", 26);
}

/*int main()
{
    ft_print_alphabet();
    return(0);
}*/