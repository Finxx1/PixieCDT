# ArgLib

ArgLib is a simple to use library for dealing with command-line arguments. You use it by simply calling a single function.

# Usage

To use ArgLib, you call the `ALParseArgs()` function. Here is how it works:

You give the first parameter the value of the `argc` in your main function.
You give the second parameter the value of the `argv` in your main function.
You give the third parameter the amount of checks you want. If you only are looking for maybe two arguments, you give this a `2`.

The rest of the parameters follow a pattern:

The text to look for.
The function to call if it is found.

The function should return `void` and take in an integer. That integer is the position in argv the text was found. From there, you can do what you want.

# Example

```c
void test1(int i) {
  printf("%d", i);
}

void test2(int i) {
  printf("%d", i);
}

int main(int argc, char* argv[]) {
  ALParseArgs(argc, argv, 2, "-a", test1, "-b", test2);
  return 0;
}
```

# Functions

```c
int ALParseArgs(int argc, char** argv, int chkc, ...)
```

THE function that does everything

`argc`: Just the argc you get from the main function

`argv`: Just the argv you get from the main function

`chkc`: The amount of arguments to check for, or the number of args after this / 2

`...`:  A string that contains the argument you want to check for, and then a function that is called. This pattern repeats `chkc` times.


```c
int ALParseArg(int argc, char** argv, const char* argt, void (*argf)(int))
```

The function that `ALParseArgs` calls to look for a single argument.

`argc`: Just the argc you get from the main function

`argv`: Just the argv you get from the main function

`argt`: The text to look for

`argf`: The function to call if the text is found
