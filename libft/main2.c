#include "libft.h"
#include <libc.h>

// typedef struct main
// {
//     /* data */
//     int a; // 1337
//     char b;// v
//     int x; // 1337
// }      s;



// int main()
// {
//     s *m;
//     ft_memset(m, 0, 12);
//     ft_memset(m, 5, 10);
//     ft_memset(m, 57, 9);
//     ft_memset(m, 0, 8);
//     ft_memset(m, 'v', 5);
//     ft_memset(m, 0, 4);
//     ft_memset(m, 5, 2);
//     ft_memset(m, 57, 1);
//     printf("%d | %c | %d", m->a, m->b, m->x);
//     int a = 1337;
//     int b = -1;
//     char *n = (char*)&a;
//     char *v = (char*)&b;
//     ft_memset(v, *n,1);
//     ft_memset(v+1, *(n+1), 1);
//     ft_memset(v+2, *(n+2),1);
//     ft_memset(v+3, *(n+3),1);
//     char *f = ft_memchr(&b, 57, 4);
//     printf("%d\n", b);
//     printf("%d", *f);
//     return 0;
// }
// typedef struct t
// {
// 	int i;
// 	//char c;
// 	int y;
// } s;

// int main()
// {
// 	s *m;

// 	ft_memset(m, 0, 12);
// 	ft_memset(m, 4, 10);
// 	ft_memset(m, 210, 9);
// 	ft_memset(m, 0, 8);
// 	ft_memset(m, 'v', 5);
// 	ft_memset(m, 0, 4);
// 	ft_memset(m, 5, 2);
// 	ft_memset(m, 57, 1);
// 	printf("i = %d  | c = %c | y = %d", m->i, m->c, m->y);
// 	ft_memset(m, 0, 8);
// 	ft_memset(m, 5, 6);
// 	ft_memset(m, 57, 5);
// 	ft_memset(m, 0, 4);
// 	ft_memset(m, 5, 2);
// 	ft_memset(m, 57, 1);
// 	printf("i = %d | y = %d", m->i, m->y);
// 	return 0;
// }

// int main()
// {
// 	int a = 1337;
// 	int b = -1;
	
// 	char *s = (char*)&a;
// 	char *z = (char*)&b;

// 	ft_memset((z), *(s), 1);
// 	ft_memset(z+1, *(s+1), 1);
// 	ft_memset(z+2, *(s+2), 1);
// 	ft_memset(z+3, *(s+3), 1);
	
// 	printf("b == %d\n", b);
// 	printf("is 5 in b == %d", *(char*)ft_memchr(&b, 5, 4));
// }

// void fundel(void* cont)
// {
// 	free(cont);
// }
// void *fun(void* content)
// {
// 	int *value = malloc(sizeof(int));
// 	*value = *(int*)content + 1;
// 	return value;
// }
// int main()
// {
// 	t_list *head = NULL;
// 	int i = 0;
// 	while (i < 7)
// 	{
// 		int *value = malloc(sizeof(int));
// 		*value = i;
// 		ft_lstadd_back(&head, ft_lstnew(value));
// 		i++;
// 	}
// 	t_list *current = head;
// 	while (current)
// 	{
// 		printf("%d\n", *(int*)current->content);
// 		current = current->next;
// 	}
// 	t_list *new = ft_lstmap(head, fun, fundel);
// 	current = new;
// 	puts("new node");
// 	while (current)
// 	{
// 		printf("%d\n", *(int*)current->content);
// 		current = current->next;
// 	}
// 	// ft_lstclear(&head, fu);
// 	return 0;
// }

// int main()
// {
// 	int f = 1337;
// 	char num = (char)f;  // Explicit cast from float to int, fractional part is lost
// 	printf("%d\n", f);
// 	printf("%d", num);
// }

// int main()
// {
// 	int a = 0;
// 	ft_memset(&a, 10, 2);
// 	printf("%d", a);
// }

// int main()
// {
// 	t_list *head = NULL;
// 	t_list *current = NULL;
// 	int i = 0;
	
// 	while(i < 7)
// 	{
// 		int *value = malloc(sizeof(int));
// 		*value = i;
// 		ft_lstadd_back(&head, ft_lstnew(value));
// 		i++;
// 	}
	
// 	current = head;
// 	while (current)
// 	{
// 		printf("%d\n", *(int*)current->content);
// 		current = current->next;
// 	}
// 	puts("Zero the content");
// 	//bzero for zero out the content
	
// 	current = head;
// 	while (current)
// 	{
// 		ft_bzero(current->content, sizeof(int));
// 		current = current->next;
// 	}
	
// 	current = head;
// 	while (current)
// 	{
// 		printf("%d\n", *(int*)current->content);
// 		current = current->next;
// 	}
// 	return 0;
// }

// int main()
// {
//     int fd = open("test.txt", O_RDWR | O_CREAT | O_APPEND, 0777);
//     printf("first: %d\n", fd);
    
//     ft_putstr_fd("hello!", fd);
//     close(fd);

//     int fd1 = open("test1.txt", O_RDWR | O_CREAT | O_APPEND, 0777);
//     printf("second file: %d\n", fd1);
    
//     ft_putstr_fd("hello world!", fd1);
//     close(fd1);
    
//     printf("first file after close: %d\n", fd);
//     printf("second file after close: %d\n", fd1);
// }


// int main()
// {
//     t_list *head = NULL;
//     int i = 0;
//     while (i < 7)
//     {
//         int *value = malloc(sizeof(int));
//         *value = i;
//         ft_lstadd_back(&head, ft_lstnew(value));
//         i++;
//     }
//     t_list *current = head;
//     while (current)
//     {
//         printf("%d\n", *(int*)current->content);
//         current = current->next;
//     }
//     puts("Zero the content of lists");
//     current = head;
//     while (current)
//     {
//         ft_bzero(current->content, 1);
//         // ft_memset(current->content, 0, 4);
//         current = current->next;
//     }
//     current = head;
//     while (current)
//     {
//         printf("%d\n", *(int*)current->content);
//         current = current->next;
//     }
//     return 0;
// }
int add(int a, int b)
{
	return a+b;
}
char print(const char *a)
{
	return printf("%s", a);
}
int main()
{
	int res;
	int (*ptr)(int, int);
	ptr = &add;
	res = ptr(10, 10);
	char (*f)(const char*);
	f = &print;
	f("hello world!\n");
	printf("%d", res);
}