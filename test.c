#include <malloc.h>


typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *a;
	a = (struct s_stock_str*)malloc(sizeof(struct s_stock_str));
	if (!a)
		return (NULL);
	a->size = 10;
	return (a);
}

int main(int argc, char *argv[])
{
	struct s_stock_str *a = ft_strs_to_tab(argc, argv);
	if (!a)
		return (write());
	free(a);
	return (0);
}
