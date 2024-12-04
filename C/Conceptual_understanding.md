### Declaration vs Definition

```bash
int i; --> Declaration + Definition
extern int i; --> Only Declaration
```
**Declaration**
- Tells the compiler that I have a variable of **Data type** (integer in above case). But don't allocate any memory to it as of now.

**Definition**
- **Declaration** + Allocate memory of specified **Data type**

### Data Types in C
**Integer Data Types**
```bash
int - 4 bytes
long int - 8 bytes 
long - 8 bytes
long long int - 8 bytes
```
**To store FP/Fraction**
```bash
float - 4 bytes
double - 8 bytes
```
**Charater storage**
```bash
char = 1 byte
sample : char a = 'x';
```

### Topic-I
scanf("%d", &num);\
"%d" --> **Format Specifier**, here format is of **Data Type** integer. Tells CPU, wanted to allocate some space for **num** variable of type integer.

### Topic-II
**LOOPS**
- Helpfull to execute set of **instructions** or **statements** again & again untill a certain condition is fullfilled.

    ```bash
    for (init; condition; Inc/Dec) {
        //Statements or Instructions
    }
    ```
    ```bash
    //Initialization;
    while(condition) {
        //Statement or Instructions
        Increments/Decrements;
    }
    ```
    ```bash
    do {
        Statements or Instructions;

    } while(condition);
    ```

### Topic-III
**Break and Continue**
continue - continue to execute the **loop again** by checking the **condition of loop** again.
break - **Start from end of the current execution loop**. i.e terminate the current execution loop.(for, while, do-while)

**goto**
```bash
goto label:
\\ statement 1;
\\ statement 2;

label:
\\ statement x;
```
### Topic-IV
**STRUCT** - Organising the Data
- Helps to group **Primitive Data types** as a **single user defined Data Type**.

```bash
struct student {
    int std_id;
    int class;
    int age;
    char *name;
};

struct student var;

--RAM-- Address--
|-----| 0x2000
|-----| 0x2004--> var
|-----| 0x2008
|-----| 0x200C
|-----| 0x2010
|-----| 0x2014

struct student *s_ptr;
s_ptr = &var;

s_ptr->std_id;

```
### Topic-V


```bash
                            ==Address Space==
    ------------            |-----| 0x00 -----------
    |          |            |-----| 0x04
    |          |            |-----| 0x08    RAM
    |  C P U   |            |-----| 0x0C
    |          |            |-----| 0x10
    ------------            |-----| 0x14 ------------
                            |-----| 0x18
                            |-----| 0x1C    ROM
                            |-----| 0x20
                            |-----| 0x24 ------------
                             ''''  ' '''
                            |-----| 0x00 -------------
                            |-----| 0x00
                            |-----| 0x00   Peripheral         -------Byte 4-----  -------Byte 3---- -----Byte 2----   -----Byte 1----
                            |-----| 0xDEAD------------------> [][][][][] [][][][] [][][][] [][][][] [][][][] [][][][] [][][][] [][][][] --LEDController-
                            |-----| 0x00 -------------
                            |-----| 0x
                            |-----| 0xFFFF

In 0xDEAD if I set some specific Bit of that byte to HIGH LED peripheral will be glown.

```