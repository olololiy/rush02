#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define ARGC_ERR_MSG "The number of arguments must be less than 3" /*сообщение об ошибке количетва аргументов*/
# define INPUT_NUM_ERR_MSG "The argument is not a positive integer" /*сообщение об ошибке если инт отрицательный*/
# define DEFAULT_DICT_FILE "dictionary/default.dict" /*дефолтный словарь из задания*/
# define MAX_LINE_WIDTH 1024 /*вычитал, что лучше при подобных операциях ставить такое макимальное значение*/
# define MAX_INPUT_NUM_LEN 1024 /*^*/
# define VALID_NUM_LEN 37 /*максимальная длина ключа*/

typedef struct			s_dict /*шаблон списка*/
{
	char						*key;
	char						*value;
	struct s_dict		*next;
}										t_dict;

extern t_dict *g_dict; /*глобальная переменная словаря*/
extern int g_dict_error;/*1 если словарь валидный, 0 - нет*/
extern int g_read_error;/*1 = чтение ок, 0 - ошибка чтения*/
extern int g_input_num_error;/*1 - валидный ключ, 0 - слишком длинный или отрицательный*/
extern int g_is_first;/*вернет 1 если ключ и значение первые*/
extern int g_eof;/*проверка на конец файла, 1 - конец, 0 - нет*/

t_dict				*create_ele(char *key, char *val); /*создает элемент для словаря*/
void				push_front(char *key, char *val); /*присваивает ключ и значение для дальнейшего добавления в словарь*/
void				build_dict(char *file); /*создает новый словарь для записи того, что мы получим из агрументов*/
void				insert_key_value(char *str); /*вписывает в словарь ключ и значение в виде 20 : лол кек*/
char				*get_val(char *key); /*получает из словаря значение, присущее данному ключу*/

char				*trim_left(char *str); /*прототипы функций, работающих с ненужными пробелами*/
void				trim_right(char *str); 
char				*trim_side(char *str);
char				*trim_allocated_str(char *str);

int				ft_strlen(char *str); /*прототипы функций, работающих со строками*/
void				ft_strcpy(char *dst, char *begin, char *end);
int				ft_is_equal(char *a, char *b);

char				*read_line(int fd); /*читает содержимое "строки" в словаре (20 : лол кек)*/
char				*read_num(void); /*читает ключ*/

void				print(char *str); /*прототипы функций для вывода*/
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				print_error_msg(char *str);

int					is_white_space(char c); /*проверяет наличие пробела, 1 - есть, 0 - нет*/
int					ft_is_number(char c); /*проверяет, является ли чар числом, 1 - да, 0 - нет*/
int					ft_is_valid_num(char *str); /*проверяет, является ли число, записанное в виде чара действительным*/
int					is_valid_key_value(char *str); /*проверяет, валидное ли значение ключа*/

void				rush(int argc, char *argv[]); /*прототип раша, получающего агрументы из меина, отправляет ниже*/
void				convert_num(char *num); /*преобразовывает число в стринг*/
char				*build_unit_str(int cnt);

#endif
