def encode(a):
    result = []
    for i in range(len(a)):
        if ord('a') <= ord(a[i]) <= ord('z'):
            result.append((ord(a[i]) + 520 - ord('a')) % 26 + ord('a'))
        elif ord('A') <= ord(a[i]) <= ord('Z'):
            result.append((ord(a[i]) + 1314 - ord('A')) % 26 + ord('A'))
        else:
            result.append(ord(a[i]))
    else:
        return result


flag = "flag{n0_No!1oWn_myG0d_Ca10!}"
out = encode(flag)
print(out)

'''
[102, 108, 97, 103, 123, 110, 48, 95, 66, 111, 33, 49, 111, 75, 110, 95, 109, 121, 85, 48, 100, 95, 81, 97, 49, 48, 33, 125]
'''
