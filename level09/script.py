with open("token", "rb") as file:
    byte_list = []
    i = 0;
    while 1:
        byte = file.read(1)
        if not byte:
            break
        byte_list.append(chr(abs(int.from_bytes(byte, byteorder='big') - i)))
        i += 1
print(''.join(byte_list))
