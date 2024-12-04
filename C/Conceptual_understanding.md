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

### Topic-VI
**Operators**
```bash
&
|
^
~
>> (equivalent to dividing number by 2^n)
<< (equivalent to multiplying number by 2^n)
```

### Topic-VII
**Qualifiers**
When a qualifier is used with a variable it changes it's property.\
**size qualifier**
```bash
changes size property of variable.
* short, long, long long
```
**signed qualifier**
```bash
Changes sign property of a variable
    * signed(default) and unsigned
    signed int a or int a --> Both are same
    [x][][][] [][][][] 
     |--> sign bit : [0] Positivie & [1] Negative

    signed : +ve, 0, -ve
    [1][][][] [][][][]
    if '1' --> (2^32 -1)

    unsigned : +ve, 0, -ve
    [0][][][] [][][][]
    if '0' --> Max value : (2^32/2 -1) & Min value : -(2^32 - 1)
```
**type qualifier**
```bash
    * volatile and const
    const :
    Will be Read Only : cannot be modified.
    const int var = 10; // Now this non-modifiedable --> Compilation error will occur if tried to modify.
    const int var; // Also not allowed

    const with pointers
    int x = 10;
    const int *ptr = &x;

    Now, *ptr = 20; is not possible.
    ptr = &y; is possible.
```
const int *ptr; // This can also be **intiliazed** later because ptr is **not constant**.
**Pointer can change the pointing location but it cannot modified the value to where it is pointing to.**

```bash
A constant pointer
int * const ptr; //Not allowed, lets assume it has stored some garbage value. And if we do *ptr, it might be possible that address is not mapped in the program. So we need to initialize the same.

int * const ptr = &var;
Now I cannot do ptr = &var_second; But we can do *ptr = 200;
```

```bash
A constant pointer to a constant integer
const int * const ptr = &var;
Cannot do *ptr = 30 or ptr = &var_second. 
Compiler will cause the error.
```
```bash

const int    *   const ptr ;
<--------->     <-------->
Property of     Property of
  Data            Pointer
```
### Topic-VIII
**All the functions which are declared without a keyword static is global.**\
**static with variable will be preserve it's value across multiple function calls.**\
**A function is externed by default if keyword static is not used.**\


### TOPIC-IX
**VOID**
* No Data and No type
* A pointer declared as void has no type. It can point to any data.
    void *ptr;
    int a;
    char c;

    ptr = &a;
        OR
    ptr = &c;

* Void pointer has no idea of what kind of data is stored or what type or how many bytes of data stored at that location.
* Also it only has **starting address** of that **byte**.
* *ptr is not allowed.

```bash
void *ptr;
int a = 10;
char x = 'a';

ptr = &a;

To use or to dereference ptr, we need to
int *ptr_a = (int *) ptr;
*ptr_a can be done now.
```
**For void pointers typecasting is a must.**

### TOPIC-X
ENDIANESS
```bash
Data = 0x12345678

MSB         LSB
[12][34][56][78] --> BIG
[78][56][34][12] --> LITTLE
```
