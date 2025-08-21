void	convert_to_hex(char c, char *out)
{
	char base[16] = "0123456789abcdef";
	out[2] = 0;
	out[0] = '0';
	if (c > 16)
	{
		out[1] = base[c % 16];
		out[0] = base[c / 16];
	}
	else
		out[1] = base[(int) c];
}
