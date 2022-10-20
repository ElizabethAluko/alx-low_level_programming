
0x03. C - Debugging
C
Debugging
 By: Carrie Ybay
 Weight: 1
 Project will start Oct 18, 2022 6:00 AM, must end by Oct 21, 2022 6:00 AM
 was released at Oct 19, 2022 12:00 AM
 An auto review will be launched at the deadline
Resources
Read or watch:

Debugging
Rubber Duck Debugging
Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.



Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is debugging
What are some methods of debugging manually
How to read the error messages
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Multiple mains
mandatory
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

	i = 0;
        positive_or_negative(i);

        return (0);
}
