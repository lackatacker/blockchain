#if !defined(hblk_crypto)
#define hblk_crypto
#endif
#include <stdint.h> /*for uint*/
#include <stddef.h> /*contains NULL*/
#include <openssl/sha.h>
#define SHA256_DIGEST_LENGTH 32

void _print_hex_buffer(uint8_t const *buf, size_t len);
uint8_t *sha256(int8_t const *s, size_t len,uint8_t digest[SHA256_DIGEST_LENGTH]);
