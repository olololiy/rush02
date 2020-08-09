char *trim_allocate_str(char *ret)
{
	int j;
	int i;
	char *ret_;
	i = 0;
	j = 0;
	ret = " ";
	while (ret[i] != '\0')
	{
		if (ret[i] != ' ')
		{
			ret_[j] = ret[i]
			i++;
			j++;
		}
		else
			i++;
	}
        return (ret_);
} 
