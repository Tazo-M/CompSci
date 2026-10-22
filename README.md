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

## To inspect your kernel:

`git remote -v` - to show the repository's remote address
* remote - work with connections to other copies of the repository
* -v - verbose [include the address, rather than only remote names]

`git rev-parse --show-toplevel` - to show the current path of the repository

`git rev-parse HEAD` - print the current commit's full identifier
* rev-parse - interpret a revision name and resolve it to an identifier
* Git's reference to your currently checked-out commit

`git tag --points-at HEAD` - lists tags attached to the current commit
* tag - work with named labels for particular points in repository history
* --points-at - filter the list to tags pointing at a specified object
* HEAD - use your current commit

`git status --short` - show local changes in a compact format
* status - report differences between your files and current commit
* --short - use compact listing 

`uname -m` - show the current system's machine architecture
* uname - display system inforamtion
* -m - display the mahcine architecture, such as x86_64, aarch64...

`gcc --version`
`ld --version`
`make --version`


## Ripgrep:

Searches in files for whatever pattern it is given. Returns a line if it finds one

`rg 'word' FILENAME`
* 'word\w+' - the word followed by a letter
* 'word\w*' - works same as just word, but highlights if it isn't an exact match

`rg 'fn function-name\('` 
one may also optionally add the deirectory name at the end, otherwise ripgrep will search the entire directory

## Git Grep

Look for patterns in tracked files in the work tree.

`git grep -w -n 'text'`
* -w - match the pattern only at word boundary
* -n - prefix the line number to matching lines