#include <stdio.h>
#include <Windows.h>
int ches[] = {361, 415, 368, 399, 374, 415, 359, 397, 376, 389, 415, 389, 367, 377, 351, 390, 366, 397, 359, 337, 365, 372, 415, 405, 371, 415, 361, 398, 363, 399, 358, 393, 365, 398, 359, 465, 377, 399, 377, 351, 368, 399, 374, 415, 360, 401, 368, 392, 415, 397, 378, 461, 360, 400, 353, 391, 379, 384, 440, 440, 390, 386, 359, 351, 379, 399, 415, 387, 355, 399, 367, 400, 366, 385, 433, 398, 367, 376, 415, 390, 370, 393, 359, 415, 362, 393, 372, 389};
char Text[128];
int b[] = {0xA1, 0xB2, 0xC3, 0xD4, 0XE5, 0xF6};
void outchat1(int ch[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        ch[i] -= b[i % 6];
        ch[i] ^= b[i % 6];
    }
}
int outchar(char text[], int ch[], int n)
{
    int i;
    outchat1(ch, n);
    for (i = 0; i < n; ++i)
    {
        text[i] = ch[i];
    }
    return i;
}
int main()
{
    int v4; // eax
    int v7; // [esp+80h] [ebp-4h]
    v4 = outchar(Text, ches, 19);
    v7 = v4;
    Text[v4] = 0;
    MessageBoxA(0, Text, "flag_out", 0);
    return 0;
}
