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

#### Topic-I
scanf("%d", &num);
"%d" --> **Format Specifier**, here format is of **Data Type** integer. Tells CPU, wanted to allocate some space for **num** variable of type integer.

#### Topic-II
**LOOPS**
- Helpfull to execute set of **instructions** or **statements** again & again untill a certain condition is fullfilled.

    ```bash
    for (init; condition; Inc/Dec) {
        //Statements or Instructions
    }
    ```
    ```bash
    Initialization;
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
