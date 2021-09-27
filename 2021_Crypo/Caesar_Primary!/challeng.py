def encode(a):
    key = 0b1001
    if ord('z') >= ord(a) >= ord('a'):
        a = chr((ord(a)-ord('a') + key) % 26 + ord('A'))
    elif ord('Z') >= ord(a) >= ord('A'):
        a = chr((ord(a)-ord('A') + key) % 26 + ord('a'))
    return a


flag = 'flag{We1c0me_t0_tHe_WoRld_oF_CryPtOgrAphy}'
c = ''
for i in flag[5:-1]:
    c += encode(i)
print(c)
'''
fN1L0VN_C0_CqN_fXaUM_Xo_lAHyCxPAjYQH
'''
