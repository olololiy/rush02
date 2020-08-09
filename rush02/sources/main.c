#include "rush02.h"

int		main(int argc, char *argv[])
{
	g_dict_error = 0;
	g_read_error = 0;
	g_is_first = 1;
	rush(argc, argv);
	return (0);
}