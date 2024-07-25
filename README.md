# String Copy

## cns_strcpy

The `cns_strcpy` function copies the string source to the string destination. This function does not null-terminate the string, which means it may behave unpredictably in some instances.

```c
char *cns_strcpy(char *dst, const char *src);
```

## cns_strncpy

```c
char *cns_strncpy(char *dst, const char *src, size_t n);
```

## cns_strlcpy

```c
size_t *cns_strlcpy(char *dst, const char *src, size_t len);
```
