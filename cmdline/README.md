## Thought process for each subquestion

### byte0
Just intuitive spamming of the "tab" white space character after "cd" command. Got to a point eventually where I couldn't continue, where I used the "cat" command to view the content of the respective file.
### byte1
First ran command. Then checked its type using "type -t supercalifragilisticexpialidocious", which I then realized was a file. I, then, ran "where supercalifragilisticexpialidocious" or just "type supercalifragilisticexpialidocious" to figure out the file path. Since it's a file, I used "file /usr/bin/supercalifragilisticexpialidocious" and understood that it's a text executable file. I used cat to view it's content and we get "#!/bin/bash echo The output is not a manual page - look elsewhere", which literally means it's a bash script file that prints to stdout "The output is not a manual page - look elsewhere".
### byte2
Executed command grep "will find" shakespeare.txt.