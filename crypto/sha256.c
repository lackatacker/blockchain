#include "hblk_crypto.h"
uint8_t *sha256(int8_t const *s, size_t len,
		uint8_t digest[SHA256_DIGEST_LENGTH])
{
if (!s || !digest)
return (NULL);
return (SHA256((const unsigned char *)s, len, digest));
}