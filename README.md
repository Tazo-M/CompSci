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

gcc -std=c17 -Wall -Wextra -pedantic FILENAME.c -o NAME
./NAME

* gcc - compiler (alternative clang), use g++/clang++ for C++, 
* -std=c17 - Compile using the C17 stabdard
* -Wall - enable common compiler warnings
* -Wextra - enable additional warnings
* -pedantic - warn about certain non-standard language extensions
* -o NAME - name the file [NAME] (put any name)
* ./NAME - run the file

## How to save files outputs:

./hello | tee results/hello_output.txt

