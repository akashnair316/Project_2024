## POINTERS

**Dangling Pointer**
```bash
int *ptr = (int *)malloc(1); //1 byte data
    " " "
    " " "
    free(ptr);
    " " "   --> At this point in time, more mallocs frm other process occured. This location might be allocated to someone else by now.
    " " "   
    *ptr = 10; --> We edited this region again, forgetting we freed it, if somehow on that address, now another process's data is now stored will start showing unwanted behaviour. We will create unwanted issues.
```
* After free(ptr);, do ptr = NULL;

**If malloc fails, NULL is returned**
**int *ptr = (int*)malloc(0) is also NULL**
