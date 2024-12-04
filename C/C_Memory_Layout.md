## MEMORY LAYOUT OF C PROGRAM

**Sample flow**
```bash
main.c ----> a.out ----> OS executes ./a.out ----> OS loads the binary into the RAM
```
* Before loaded into RAM, OS will segragate a.out into 5 segments.
```bash
Stack

Heap

BSS(Unintialized Data segment)

Initialized Data segment

Text
```
```bash
|-----------------------|-------------------->Highest memory
|---local var-----------|
|----func args----------|
|--------Stack----------|
|-----------------------|
|--return-addr-caller---|
|-----------------------|
|                       |
|            ^          |
|            |          |
|-----------------------|-------------------->
|-----------------------|
|--------Heap-----------|
|---malloc,alloc--------|
|-----------------------|
|                       |
|-----------------------|-------------------->
|-----------------------|
|---------global--------|
|--------static---------|       Initialised
|---With initial value--|
|-----------------------|
|                       |            Data Segment
|--------global---------|
|--------static---------|
|-----------------------|       Uninitialised(bss)
|-With no initial value-| 
|-----------------------|
|                       |
|                       |
|-----------------------|-------------------->
|-----------------------|
|-----------------------|
|-----------------------|   Read Only Area : User code shouldn't be modified.
|-----------------------|
|------Code-Text--------|
|-----------------------|------> Lowest Memory
```