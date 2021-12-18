#include "hblk_crypto.h"
EC_KEY *ec_create(void)
{
    EC_KEY *key = EC_KEY_new_by_curve_name(EC_CURVE);
    if(EC_KEY_generate_key(key))
    return (key);
    return(NULL);
}

