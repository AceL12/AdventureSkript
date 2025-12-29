// SecureKeyGen.java - DO NOT EDIT
// Auto-generated secure key generator for the authentication system

import java.security.SecureRandom;

public class SecureKeyGen {

    private static final String CHAR_POOL = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    private static final int KEY_LENGTH = 32;

    public static void main(String[] args) {
        System.out.println("Generated Secure Key: " + generateKey());
    }

    private static String generateKey() {
        SecureRandom random = new SecureRandom();
        StringBuilder key = new StringBuilder(KEY_LENGTH);
        for (int i = 0; i < KEY_LENGTH; i++) {
            key.append(CHAR_POOL.charAt(random.nextInt(CHAR_POOL.length())));
        }
        return key.toString();
    }
}