#include <sys/stat.h>
#include <errno.h>
#include <stdint.h>

// UART driver putchar (from your printf.c)
extern void putchar(char c);

// Called by malloc/newlib for heap extension
caddr_t _sbrk(int incr)
{
    extern char _end;      // defined by linker script
    extern char _heap_end; // optional
    static char *heap_end;
    char *prev_heap_end;

    if (heap_end == 0) {
        heap_end = &_end;
    }

    prev_heap_end = heap_end;

    char *next = heap_end + incr;

#ifdef _heap_end
    if (next >= &_heap_end) {
        errno = ENOMEM;
        return (caddr_t)-1;
    }
#endif

    heap_end = next;
    return (caddr_t) prev_heap_end;
}

int _close(int file) { return -1; }
int _fstat(int file, struct stat *st) { st->st_mode = S_IFCHR; return 0; }
int _isatty(int file) { return 1; }
int _lseek(int file, int ptr, int dir) { return 0; }
int _read(int file, char *ptr, int len) { return 0; }

int _write(int file, char *ptr, int len)
{
    int i;
    for (i = 0; i < len; i++) {
        if (ptr[i] == '\n')
            putchar('\r');   // add CR for serial terminals
        putchar(ptr[i]);
    }
    return len;
}

int _kill(int pid, int sig) { errno = EINVAL; return -1; }
int _getpid(void) { return 1; }
void _exit(int status) { while (1); }
