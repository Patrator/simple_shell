## **Hello people, this is our simple shellf project readme.**

![picture](C:\Users\hp\Documents\simple_shell)

### **0. Write a beautiful code that passes the Betty checks**
---

### **1. Write a UNIX command line interpreter**
- Display a prompt and wait for the user to type a command. 

- Command lines are made only of one word. No arguments will be passed to programs.

- The prompt is displayed again each time a command has been executed.

- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
---
### **2. Simple shell Task 0.2**
- Handle command lines with arguments.
---
### **3. Simple shell Task 0.3**
- Handle the PATH
fork must not be called if the command doesn’t exist.
---

### **4. Simple shell Task 0.4**
- Implement the exit built-in, that exits the shell
Usage: exit
- You don’t have to handle any argument to the built-in exit.
---

### **5. Simple shell Task 0.5**
- Implement the env built-in, that prints the current environment.

### **6.Simple shell task 0.6**
- Write your own getline function using a buffer to read many chars at once and call the least possible the read system call.
- You will need to use static variables.
---
### **8. Simple shell task 0.4.1**
- handle arguments for the built-in exit
- Usage: exit status, where status is an integer used to exit the shell.
---
### **9. setenv, unsetenv**

Implement the setenv and unsetenv builtin commands**

**setenv**

- Initialize a new environment variable, or modify an existing one
Command syntax: setenv VARIABLE VALUE -Should print something on stderr on failure

**unsetenv**

* Remove an environment variable
* Command syntax: unsetenv VARIABLE - Should print something on stderr on failure
---
---
### **10. cd (change directory)**
Implement the builtin command cd:

- Changes the current directory of the process.
- Command syntax: cd [DIRECTORY]
- If no argument is given to cd the command must be interpreted like cd $HOME
- You have to handle the command cd -
- You have to update the environment variable PWD when you change directory
---
### **11. ; (column)**
* Handle the commands separator ";"
---
### **12. && and ||**
* Handle the && and || shell logical operators
---
### **13. alias**
Implement the alias builtin command
- Usage: alias [name[='value'] ...]
- alias: Prints a list of all aliases, one per line, in the form name='value'
- alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
- alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value
### **14. Variables**
Handle variables replacement
* Handle the $? variable
* Handle the $$ variable
### **15. Comments**
- Handle comments (#)