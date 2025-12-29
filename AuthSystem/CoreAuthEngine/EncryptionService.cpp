// EncryptionService.cpp - Core Encryption Service

#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string encryptData(const std::string &data) {
    const char *key = "FAKE_KEY_123456789012345678901234";
    unsigned char encrypted[256];
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();

    if (!ctx) {
        return "Encryption Error";
    }

    EVP_EncryptInit_ex(ctx, EVP_aes_256_ecb(), NULL, (unsigned char *)key, NULL);
    int len;
    EVP_EncryptUpdate(ctx, encrypted, &len, (unsigned char *)data.c_str(), data.length());
    EVP_CIPHER_CTX_free(ctx);

    return std::string((char *)encrypted, len);
}

int main() {
    std::string data = "SensitiveData123";
    std::cout << "Encrypted: " << encryptData(data) << std::endl;
    return 0;
}