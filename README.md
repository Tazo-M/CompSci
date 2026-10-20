# CompSci

System info:
Ubuntu 24.04.4 LTS

Compilers:
gcc (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0
g++ (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0
clang version 18.1.3 (1ubuntu1)
clang++ version 18.1.3 (1ubuntu1)

Debuggers:
GNU gdb (Ubuntu 15.1-1ubuntu1~24.04.1) 15.1
lldb version 18.1.3

Working inside WSL via VS Code terminal.

## How to run files:

`gcc -std=c17 -Wall -Wextra -pedantic src/FILENAME.c -o src/NAME`
`src/NAME`

* gcc - compiler (alternative clang), use g++/clang++ for C++, 
* -std=c17 - Compile using the C17 stabdard
* -Wall - enable common compiler warnings
* -Wextra - enable additional warnings
* -pedantic - warn about certain non-standard language extensions
* -o NAME - name the file [NAME] (put any name)
* ./NAME - run the file

May also add -g -O0 to use GDB:
* -g - includes debugging information: variable names, types, and the connection between executable instructions and the source lines. GDB uses it to show and inspect the C code.
* -O0 - disables compiler optimization, making execution easier to follow while stepping and inspecting variab

## How to save files outputs:

`src/NAME | tee results/NAME_output.txt`

## How to run with AddressSanitizer:
`gcc -std=c17 -Wall -Wextra -pedantic -g -O0 -fsanitize=address -fno-omit-frame-pointer tests/FILENAME.c -o tests/NAME_asan`
`./tests/NAME_asan`

* -fsanitize=address - adds checks that detect memory errors while the program runs.
* -g - includes debugging information so reports can identify source files and lines.
* -O0 - disables optimization, making reports easier to relate to the source code.
* -fno-omit-frame-pointer - helps produce clearer call stacks.

## To run and save both normal output and error messages:

`./tests/NAME_asan 2>&1 | tee results/NAME_asan_output.txt`

* 2>&1 - combines error output with normal output so both reach tee. This captures ASan reports, which are written to error output.
* tee - displays the combined output and saves it to the specified file.