# String Copy

The `cns_strcpy`, `cns_strncpy`, and `cns_strlcpy` functions are simple implementations of the GNU C Standard Library functions, respectively `strcpy`, `strncpy`, and `strlcpy`, found under the header `<string.h>`.

## cns_strcpy

```c
char *cns_strcpy(char *dst, const char *src);
```

<div style="text-align: right;">
<a href="https://www.man7.org/linux/man-pages/man3/strcpy.3.html" target="_blank">strcpy(3) — Linux manual page</a>
</div>

The `cns_strcpy` function copies the `src` string to the `dst` string, including the termination character, provided that the destination string is big enough to accommodate the entirety of the source string. It's up to the developer to ensure that `dst` has enough length to allow for the complete copy of `src`.

If `dst` is not big enough, the behavior is undefined, which may lead to buffer overflows and potential security vulnerabilities.

## cns_strncpy

```c
char *cns_strncpy(char *dst, const char *src, size_t n);
```

The `cns_strncpy` function is similar to cns_strcpy but allows specifying the maximum number of characters to copy from the `src` string. This can help prevent buffer overflows by limiting the number of characters copied to the destination string. However, it's important to note that if `src` is shorter than `n`, the remainder of dst will be padded with null bytes.

## cns_strlcpy

```c
size_t *cns_strlcpy(char *dst, const char *src, size_t len);
```

The `cns_strlcpy` function copies up to ``len-1`` characters from the ``src`` string to the ``dst`` string, and null-terminates the result. It ensures that the destination string is null-terminated, which helps avoid buffer overflows and truncation issues. The function returns the total length of the string it tried to create, which means the length of ``src``. This can be used to detect truncation by comparing the returned length with the size of the destination buffer.
