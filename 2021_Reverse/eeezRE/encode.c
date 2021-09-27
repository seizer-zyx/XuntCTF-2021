#include <stdio.h>
int main()
{
    char flag[22] = "this_is_flag_Reverse!";
    for (int i = 0; i < 21; i++)
    {
        flag[i] -= 0x02;
        flag[i] ^= 0x11;
        printf("%c", flag[i]);
    }
    return 0;
}
// output:
// u{NthaAaRrRLWN|fr^D^j