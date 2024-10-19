## Thought process for each subquestion

### byte0
Just intuitive spamming of the "tab" white space character after "cd" command. Got to a point eventually where I couldn't continue, where I used the "cat" command to view the content of the respective file.
### byte1
First ran command. Then checked its type using "type -t supercalifragilisticexpialidocious", which I then realized was a file. I, then, ran "where supercalifragilisticexpialidocious" or just "type supercalifragilisticexpialidocious" to figure out the file path. Since it's a file, I used "file /usr/bin/supercalifragilisticexpialidocious" and understood that it's a text executable file. I used cat to view it's content and we get "#!/bin/bash echo The output is not a manual page - look elsewhere", which literally means it's a bash script file that prints to stdout "The output is not a manual page - look elsewhere".
### byte2
Executed command "grep "will find" shakespeare.txt".
### byte3
Executed command "diff shakespeare.txt shakespeare.modified.txt".
### byte4
Since there are multiple folders to choose from using the "find" command, one way to spot the "cup.txt" file is to execute this command: find / -name "cup.txt" -ls. This will traverse every directory (which we may or may not have access to read) of our OS and spot the requested file "cup.txt".
### byte5
Created a new subdirectory using command "mkdir /tmp/new_subdir", then copied source file to this new directory, then ran command "cd /tmp/new_subdir" to go to said directory and
complied the program there with commands "gcc byte5.c -o byte5" and "./byte5" to compile and execute program respectively (re-ran execution because of invalid format).
### byte6
Created a new directory that by default gives us permission to read file, so we just created a new one in the /tmp directory called 'new_sundir' (with a typo). I unziped the file contents there after running command "unzip byte6.zip -d /tmp/new_sundir" and ran 'cat byte6.txt' to view the text file.
