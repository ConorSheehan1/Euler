### Euler
Project Euler practice https://projecteuler.net/

### Dev Notes

##### C
Add -lm flag when compiling to ensure math libs are included. e.g.

    gcc 03_largest_prime_factor.C -o 03.exe -lm
    ./03.exe

##### Python
Use pypy for .py scripts, some have long runtimes

##### Linter

Show lint problems

    autopep8 --recursive --diff .

Fix lint errors in place
  
    autopep8 --recursive --in-place .
