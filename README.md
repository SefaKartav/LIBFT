*This project has been created as part of the 42 curriculum by sekartav.*

# libft

## Description

**libft**, C programlama dilinde sık kullanılan standart kütüphane fonksiyonlarının yeniden yazılmış bir koleksiyonudur.

Projenin temel amacı:

* Standart C kütüphanesindeki (`<string.h>`, `<stdlib.h>`, `<ctype.h>` vb.) temel fonksiyonları **yasak fonksiyonlar kullanmadan** baştan yazmak
* Standart kütüphanede bulunmayan ancak pratikte çok faydalı olan yardımcı fonksiyonlar oluşturmak

Bu kütüphane, 42’nin ilerleyen projelerinde (get_next_line, ft_printf, so_long, pipex, push_swap, minishell, cub3D vb.) temel bir araç olarak kullanılacaktır.

---

## Fonksiyon Listesi

### Karakter kontrol ve dönüşüm

```c
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
```

### Bellek işlemleri

```c
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
```

### String işlemleri

```c
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    **ft_split(char const *s, char c);
```

### Sayı ve dönüşüm

```c
int     ft_atoi(const char *nptr);
```

### Dosya descriptor’ına yazma

```c
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
```

### Linked list

```c
t_list  *ft_lstnew(void *content);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

---

## Instructions

### Gereksinimler

* GCC veya Clang derleyici
* `make` aracı
* Standart C kütüphane başlık dosyaları

### Derleme komutları

```bash
make
make bonus
make clean
make fclean
make re
```

---

## Resources

### Klasik kaynaklar

* `man 3 <fonksiyon>`
* *The C Programming Language* — Kernighan & Ritchie
* [https://cplusplus.com/reference/cstring/](https://cplusplus.com/reference/cstring/)
* [https://cplusplus.com/reference/cstdlib/](https://cplusplus.com/reference/cstdlib/)
* [https://en.cppreference.com/w/c](https://en.cppreference.com/w/c)
* Beej's Guide to C — [https://beej.us/guide/bgc/](https://beej.us/guide/bgc/)

### 42 ve topluluk kaynakları

* 42 libft subject PDF
* [https://github.com/ragouel/libft_cheat_sheet](https://github.com/ragouel/libft_cheat_sheet)
* YouTube: *42 tayfa ile libft*
* [https://42-cursus.gitbook.io/guide/0-rank-00/libft](https://42-cursus.gitbook.io/guide/0-rank-00/libft)

---

## AI Kullanımı

Bu projede AI araçları (Grok, ChatGPT, Claude) aşağıdaki amaçlarla kullanılmıştır:

* Standart fonksiyonların edge case’lerini ve tanımsız davranışlarını anlamak
* `ft_split`, `ft_strtrim`, `ft_substr` ve linked list fonksiyonları için mantık ve yapı fikirleri almak
* Pointer aritmetiği ve bellek yönetimi konularını daha hızlı kavramak
* Kod okunabilirliğini artırmak için isimlendirme ve yapı önerileri almak
* Makefile ve proje yapısı için başlangıç şablonu oluşturmak

> Hiçbir fonksiyon doğrudan kopyalanmamıştır.
> Tüm implementasyonlar tarafımdan yazılmış, AI yalnızca öğretici ve kod inceleyici olarak kullanılmıştır.


## Author

* sekartav - 42 Student