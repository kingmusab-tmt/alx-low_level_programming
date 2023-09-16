#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
/**
 * struct validTypes - structe of v_types
 * @valid: valid characters
 * @f: pointer to function
 */
typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
