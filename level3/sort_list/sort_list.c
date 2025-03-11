
typedef struct s_list t_list;
struct s_list
{
	int     data;
	t_list  *next;
};

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int c;
    t_list *t;

    t = lst;

    while (lst && lst->next )
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
	{
            c = lst->data;
            lst->data = lst->next->data;
            lst->next->data = c;
            lst = t;
        }
	else
		lst = lst->next;
    }
    return (t);
}
