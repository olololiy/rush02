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

/*функция создания элемента*/
/*функция урезания пробелов*/
/*функция построения файла*/
/*ft_strlen*/
/*ft_strcpy*/
/*ft_st_is_equal*/
/*всё, что понадобится и появится дальше, записывайте сюда*/