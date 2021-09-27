new_base64 = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789{}'
index = []

flag = 'flag{95a1446a7120e4af5c0c8878abb7e6d2}'

for i in flag:
    index.append(new_base64.find(i))
print(index)

'''
[5, 11, 0, 6, 62, 61, 57, 0, 53, 56, 56, 58, 0, 59, 53, 54, 52, 4, 56, 0, 5, 57, 2, 52, 2, 60, 60, 59, 60, 0, 1, 1, 59, 4, 58, 3, 54, 63]
'''
