/*
** все три вместе читают refence file и проверяют, валидные ли ключ и значения
*/

char	*read_line(int fd) /* возвращает в меин валидность строки или нет. Пока слабо представляю, какой будет меин :D */
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(MAX_LINE_WIDTH + 1); /* это значение нужно определить в хедере через дефайн */
	while ((read(fd, &ret[i], 1)))
	{
		g_eof = 0;
		if (i == MAX_LINE_WIDTH)
		{
			free(ret); /* не разобрался до конца, правильно ли работает free, вроде так */
			g_read_error = 1;
			print_error_msg("Maximum line width exceeded.");
			return (0);
		}
		if (ret[i] == '\n') /* при конце строки прерывает считывание и возвращает прочитанное в меин */
		{
			ret[i] = 0;
			break ;
		}
		++i;
	}
	return (ret);
}



char	*read_num(void) /* сверяет максимально возможную длину ключа, читает значение, возвращает в воид */
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(MAX_INPUT_NUM_LEN + 1); /* определить в хедере! */
	while ((read(0, &ret[i], 1)))
	{
		if (i == MAX_INPUT_NUM_LEN)
		{
			free(ret);
			g_input_num_error = 1;
			print_error_msg("Maximum length of number exceeded.");
			return (0);
		}
		if (ret[i] == '\n') /* то же самое, что и в 24 строке */
		{
			ret[i] = 0;
			break ;
		}
		++i;
	}
	return (trim_allocated_str(ret)); /* так надо будет назвать функцию, режущую пробелы, когда мы её сделаем */
}