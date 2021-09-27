package exp;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class coffee {
    public static String encodeone(String str, int n) {
        String str1 = null;
        return str1;
    }

    private static final byte[] encodingTable = { (byte) 'A', (byte) 'B', (byte) 'C', (byte) 'D', (byte) 'E',
            (byte) 'F', (byte) 'G', (byte) 'H', (byte) 'I', (byte) 'J', (byte) 'K', (byte) 'L', (byte) 'M', (byte) 'N',
            (byte) 'O', (byte) 'P', (byte) 'Q', (byte) 'R', (byte) 'S', (byte) 'T', (byte) 'U', (byte) 'V', (byte) 'W',
            (byte) 'X', (byte) 'Y', (byte) 'Z', (byte) 'a', (byte) 'b', (byte) 'c', (byte) 'd', (byte) 'e', (byte) 'f',
            (byte) 'g', (byte) 'h', (byte) 'i', (byte) 'j', (byte) 'k', (byte) 'l', (byte) 'm', (byte) 'n', (byte) 'o',
            (byte) 'p', (byte) 'q', (byte) 'r', (byte) 's', (byte) 't', (byte) 'u', (byte) 'v', (byte) 'w', (byte) 'x',
            (byte) 'y', (byte) 'z', (byte) '0', (byte) '1', (byte) '2', (byte) '3', (byte) '4', (byte) '5', (byte) '6',
            (byte) '7', (byte) '8', (byte) '9', (byte) '+', (byte) '/', (byte) '=' };
    private static final byte[] decodingTable;

    static {
        decodingTable = new byte[128];
        for (int i = 0; i < encodingTable.length; i++) {
            decodingTable[encodingTable[i]] = (byte) i;
        }
    }

    public static byte[] encode(byte[] data) {
        byte[] bytes;
        int modulus = data.length % 3;
        if (modulus == 0) {
            bytes = new byte[(4 * data.length) / 3];
        } else {
            bytes = new byte[4 * ((data.length / 3) + 1)];
        }
        int dataLength = (data.length - modulus);
        int a1;
        int a2;
        int a3;
        for (int i = 0, j = 0; i < dataLength; i += 3, j += 4) {
            a1 = data[i] & 0xff;
            a2 = data[i + 1] & 0xff;
            a3 = data[i + 2] & 0xff;
            bytes[j] = encodingTable[(a1 >>> 2) & 0x3f];
            bytes[j + 1] = encodingTable[((a1 << 4) | (a2 >>> 4)) & 0x3f];
            bytes[j + 2] = encodingTable[((a2 << 2) | (a3 >>> 6)) & 0x3f];
            bytes[j + 3] = encodingTable[a3 & 0x3f];
        }
        int b1;
        int b2;
        int b3;
        int d1;
        int d2;
        switch (modulus) {
            case 0:
                break;
            case 1:
                d1 = data[data.length - 1] & 0xff;
                b1 = (d1 >>> 2) & 0x3f;
                b2 = (d1 << 4) & 0x3f;
                bytes[bytes.length - 4] = encodingTable[b1];
                bytes[bytes.length - 3] = encodingTable[b2];
                bytes[bytes.length - 2] = (byte) '=';
                bytes[bytes.length - 1] = (byte) '=';
                break;
            case 2:
                d1 = data[data.length - 2] & 0xff;
                d2 = data[data.length - 1] & 0xff;
                b1 = (d1 >>> 2) & 0x3f;
                b2 = ((d1 << 4) | (d2 >>> 4)) & 0x3f;
                b3 = (d2 << 2) & 0x3f;
                bytes[bytes.length - 4] = encodingTable[b1];
                bytes[bytes.length - 3] = encodingTable[b2];
                bytes[bytes.length - 2] = encodingTable[b3];
                bytes[bytes.length - 1] = (byte) '=';
                break;
        }
        return bytes;
    }

    public static void main(String[] args) {

        System.out.println("<---  xuntctf2021  --->");
        System.err.println("Input flag:");
        String e1 = "G:rWnGXY4J{WW{ONR3:kOzd{Niu[W:1N";
        String str = null;
        try {
            str = (new BufferedReader(new InputStreamReader(System.in))).readLine();
        } catch (Exception exception) {
            System.out.println("ERROR");
        }
        if (str.length() == 24) {
            byte[] codeByteArr = str.getBytes();
            byte[] encodeByteArr = coffee.encode(codeByteArr);
            String encodeone = new String(encodeByteArr);
            String encodetwo = null;
            int len = encodeone.length();
            int n1 = (len / 4) - 1;
            int n2 = n1 * 2 - 1;
            int n3 = n2 * 2 - 1;
            int n4 = len - 1;
            encodetwo = (encodeone.substring(n2, n3) + encodeone.substring(0, n1) + encodeone.substring(n3, len)
                    + encodeone.substring(n1, n2));
            encrypt en = new encrypt();
            en.key = 1;
            en.max = len;
            en.plaintext = encodetwo.toCharArray();
            en.encryption();
            String e2 = new String(en.ciphertext);
            if (e1.equals(e2)) {
                System.out.println("correct");
            } else {
                System.out.println("error");
            }
        } else {
            System.out.println("error");
        }
    }
}

class encrypt {
    char ciphertext[];
    int key;
    char plaintext[];
    StringBuffer plaintextStr = new StringBuffer("");
    StringBuffer ciphertextStr = new StringBuffer("");
    int max;

    void encryption() {
        ciphertext = new char[max];
        for (int j = 0; j < max; j++) {
            ciphertext[j] = 'P';
        }
        for (int i = 0; i < plaintext.length; i++) {
            if (plaintext[i] != 'P') {
                int temp = plaintext[i] + key;
                ciphertext[i] = (char) temp;
                ciphertextStr.append(ciphertext[i]);
            } else {
                break;
            }
        }
    }
}