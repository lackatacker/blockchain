#include "hblk_crypto.h"
/**
 * get0_group returns the group associated with the EC KEY
 * get0_public_key returns the associated public key with the EC KEY
 * ec_to_pub - extract public key from EC_KEY struct
 * @key: pointer to EC_KEY struct to extract from
 * @pub: address to store extracted public key
 *
 * Return: pointer to pub, NULL on error
*/
uint8_t *ec_to_pub(EC_KEY const *key, uint8_t pub[EC_PUB_LEN])
{
const EC_POINT *point;
const EC_GROUP *group;
if (!key || !pub)
return (NULL);
point = EC_KEY_get0_public_key(key);
group = EC_KEY_get0_group(key);
if (EC_POINT_point2oct(group, point, POINT_CONVERSION_UNCOMPRESSED, pub,
EC_PUB_LEN, NULL))
return (pub);
return (NULL);
}
