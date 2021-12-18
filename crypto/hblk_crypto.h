#if !defined(hblk_crypto)
#define hblk_crypto
#endif
#include <stdint.h> /*for uint*/
#include <stddef.h> /*contains NULL*/
#include <openssl/sha.h>
#include <openssl/ec.h> /*for eiptic curv creation*/
#include <openssl/evp.h> /*contains secp256k1 curve*/
#define SHA256_DIGEST_LENGTH 32
#define EC_CURVE NID_secp256k1
#define EC_PUB_LEN 65
void _print_hex_buffer(uint8_t const *buf, size_t len);
/* crypto tasks */
uint8_t *sha256(int8_t const *s, size_t len,uint8_t digest[SHA256_DIGEST_LENGTH]);
EC_KEY *ec_create(void);
uint8_t *ec_to_pub(EC_KEY const *key, uint8_t pub[EC_PUB_LEN]);
