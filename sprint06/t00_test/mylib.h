#ifndef _MYLIB_H_
#define _MYLIB_H_

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
int mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

#endif
