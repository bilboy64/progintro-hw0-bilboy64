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
### byte7
At first we ran command "tar -xzf byte7.tar.gz" (flags x z f and C are used to extract and decompress using gzip), however we don't have the necessary permissions to do that. So we followed the previous process and created a new subdirectory inside of the unix /tmp folder and then ran command "tar -xzf byte7.tar.gz -C /tmp/new_subdir" to extract the contents of the zipped file there. However, since new_subdir was created by owner byte5, we do not have the necessary permissions to write to that folder (which we can see upon running ls -ld /tmp/new_subdir). So, we create new subdirectory "byte7_new_subdir" and move the contents of the zipped file there (and viewed them with "cat").
### byte8
We ran the xxd command on that file and saw that there was a hidden message in non standard ASCII characters in the begging on the file. So, after using command "strings" (which prints out any readable text from the file) we got to see the hidden message. Alternatively, we could've use commands pico and vim to read the non standard ASCII string as well.
### byte9
At first I tried command "cd "-"" which didn't achieve anything. I also tried "cd -- -" but it didn't work. However, after executing the file as "./-" I got this as a response: ./-: line 1: filepaths_can_be_useful: command not found. Therefore, we're getting there. I ran "file ./-" and got to see that it's an ASCII text file. Therefore, I ran command "strings ./-" and got the appropriate answer. I then noticed I could've also used "cat ./-" and made my life easier.
### byte10
After playing around with the other file for a bit, I sorted the names of the text file using commands "sort names.txt | head -n 10 | tail -n 1". Command "sort" sorts the names and keeps them in the same file, command "head" gives me the first 10 lines of the new sorted text "file" (or rather 10 first names since every name is separated by a newline character) and "tail" gives me every line from the *new* new sorted "file" (with 10 lines), bottom up. In that case, it only returns the last line, which is the requested 10th name.

