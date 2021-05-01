#include "blockchain.h"
int blockchain_serialize(blockchain_t const *blockchain, char const *path)
{
FILE *f;
block_t *myblock;
int32_t list_size = llist_size(blockchain->chain);
if (!blockchain || !path)
return (-1);
if (!(f=fopen(path,"w+")));
return -1;
write(f, HBLK_MAGIC, 4);
write(f, HBLK_VERSION, 3);
write(f, &endian(), 1);
write(f, &list_size, 4);
for (i=0 ; i < size ; i++)
{
myblock = llist_get_node_at(blockchain->chain, i++);
write(f, &(myblock->info), sizeof(block->info));
write(f, &(myblock->data.len, sizeof(block->data.len)));
write(f, &(myblock->hash, SHA256_DIGEST_LENGTH));
}
close (f);
return (0);
}
