# simple_shell
WHAT IS THE SHELL?
Shell is a program that takes the command inputs written from the user’s keyboard and passes them to the machine to execute them through the kernel. It also verifies if the command inputs from the user are correct.I


So, in general, a Shell is a user interface to use the services of a computer.
It can be a command-line interface –the one we will build- or graphical user interface, like regular software such as Windows Office or Adobe suites.

The shell is a command-line interface that acts as an intermediary between a user and the operating system. Its primary function is to interpret and execute user commands. The inner workings of a shell can be quite intricate, but here's a high-level overview of how a shell typically works:


HOW DOES THE SHELL WORK?
Displaying the Prompt:
When you open a terminal and start a shell, the shell displays a prompt, indicating that it's ready to accept commands. The prompt usually includes information about the user, host, current directory, and other contextual details.
Reading User Input:
The shell waits for the user to input a command. The user types the command into the terminal and presses the "Enter" key. The shell reads this input, often using functions like fgets, and stores it in a buffer.
Parsing the Command:
The shell parses the user input to understand the command and its arguments. It splits the input into tokens, where each token represents a part of the command (command name, arguments, options, etc.). This parsing phase is responsible for understanding how the command is structured.
DELIMITER
"My name is Leo"
My
name
is
Leo

PARSING

Searching for the Command:
Once the command and its arguments are parsed, the shell searches for the executable file corresponding to the command. It looks for the executable in directories specified by the PATH environment variable.

/bin/bash
Creating a Child Process:
If the executable is found, the shell creates a child process using system calls like
fork. The child process is a separate instance of the shell in which the command will be executed.
Executing the Command:
The child process uses system calls like
exec to replace its own program with the program of the command to be executed. The new program takes over the child process's execution, and the command runs in this process.
Wait for Command Completion:
The parent shell (the original process) waits for the child process to complete using functions like wait or waitpid. This ensures that the shell doesn't display the next prompt until the command finishes executing.
Displaying Output:
If the executed command produces output, such as text or data, the shell displays this output in the terminal for the user to see.
Returning to the Prompt:
After the executed command completes, the shell returns to its initial state, displaying the prompt and waiting for the user to input another command.
Exiting the Shell:
The user can exit the shell by entering a specific command (e.g., exit) or by pressing the appropriate key combination (e.g., Ctrl+D). The shell terminates and the terminal returns to its previous state.



TOKENIZATION
Tokenization is the process of breaking down a string into smaller components called tokens. In the context of a shell, tokenization is used to split a user-input command into individual parts, such as the command name and its arguments.
#include <stdio.h>
#include <string.h>

int main() {
    char command[] = "my,name,is,leo";

    // Initialize variables for tokenization
    char *token;
    char *delim = ",";
   
    // Tokenize the input command
    token = strtok(command, delim);
   
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim); // Pass NULL to continue tokenization
    }

    return 0;
}


my
name
is
leo



INTERACTIVE MODE AND NON-INTERACTIVE MODE
These modes describe how a user interacts with the shell and how the shell responds. Let's break down the differences:

Interactive Mode:
In interactive mode, the shell is actively waiting for user input. The user types commands directly into the shell's prompt, and the shell executes those commands immediately. The shell displays the results of the executed commands back to the user in real-time.
Characteristics of interactive mode:
User provides input commands in real-time.
Shell displays a prompt to indicate it's ready for user input.
Commands are executed immediately after the user hits the "Enter" key.
The shell displays command output immediately after execution.
The shell might have features like command history and autocompletion to assist the user.
Non-Interactive Mode:
In non-interactive mode, the shell doesn't wait for user input at a prompt. Instead, it executes commands that are provided to it through other means, such as script files or command-line arguments. The shell reads and processes these commands without user intervention and typically doesn't display command output unless explicitly directed to do so.
Characteristics of non-interactive mode:
Commands are provided to the shell through a script file or command-line arguments.
The shell doesn't display a prompt.
Commands can be executed in sequence without user intervention.
Output might not be displayed unless explicitly redirected to a file or shown using other means.




THE THREE FILE DESCRIPTORS STREAMS
Standard Input - stdin - 0
Standard Output - stdout - 1
Standard Error stderr- 2 - writes diagnostic output



LET'S CODE A SIMPLE SHELL
Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)


You don’t have to:
use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments

WHAT YOU WILL NEED
A header file that will contain function prototypes
A function that displays the prompt
A function that will read user input
A function that will execute commands
A main source code file that will be the entry point

readme.md
