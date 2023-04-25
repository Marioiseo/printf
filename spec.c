#include "main.h"



int (*spec(char *a))(va_list pt)
{
	spec_t sp[] = {
		{"c" , printchar},
		{"d" , printint},
		{"i" , printint},
		{"u" , printuns},
		{"x" , printhexa},
		{"X" , printhexa},
		{"o" , printoctal},
		{"s" , printstr},
		{"b" , printbin},
		{"%" , printpercent},
		{NULL , NULL},
	};
	int i = 0;

	while (sp[i].sp)
	{
		if (a == sp[i].sp)
		{
			return (sp[i].fun);
		}
		i++;
	}
	return (NULL);
}
int get_spec(char *a, va_list pt)
{
	int (*fun)(va_list) = spec(a);
	if (fun)
		return (fun(pt));
	return (0);
}
