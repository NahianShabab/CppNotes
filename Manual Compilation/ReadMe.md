# Manual Compilation

## C++ source in multiple files
## I wrote a simple Vector3 class. The normalization function is written in ## another file. Then I used these in the main.cpp file.

### I compiled and linked the files using the following command
```
g++ -c *.cpp
g++ -o main *.o
```

### Resulting in a single executable "main.exe" file