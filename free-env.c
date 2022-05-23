#include "head.h"
/**
 * free_env_arr - frees created environment array
 *
 * @env: malloced environment array
 */
void free_env_arr(char **env)
{
	int j;

	for (j = 0; env[j]; j++)
	{
		free(env[j]);
	}
	free(env);
}
