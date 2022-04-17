#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: input hash table
 * @key: input key
 * Return: value associated with the element, or NULL if key
 * couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;
	const unsigned char *u_key;

	if (ht == NULL || key == NULL)
		return (NULL);
	u_key = (const unsigned char *)key;
	index = key_index(u_key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
