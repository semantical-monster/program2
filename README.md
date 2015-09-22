# program2
posix threads

Programming Assignment #2 --- POSIX Threads and Signals
1)	Your task in this assignment will be to write a routine which creates threads, has them do work in parallel, and then terminates when the last thread has completed. 
The Setup: 
There are several students sitting near each other rooting for their favorite teams.  Each student will cheer for his or her team some given number of times. 
The Program: 
Your task is to write a program which will simulate this cheering.  The program should be called cheer.c, and should generate an executable called cheer.   When the program is run from a command line prompt, arguments may be given to specify how many times.  The main() routine then creates a thread for each team, and each thread is responsible for cheering a random number of times (range  between 1:10) and for the correct number of teams team.  A global counter of the number of cheers printed for each team will need to be kept.     
Have a read-only array of 10 possible teams  eg. (“Bulldogs”,”Pirates”,”Tigers”,”Lions”,,…)
A cheer for a particular team looks like this:  "Go Pirates!"  A sample run would look something like this with 4 threads:
%  cheer  4 
Go Bulldogs!
Go Bulldogs!
Go Bulldogs!
Go Bulldogs!
Go Tigers!
Go Lions!
Go Lions!
Go Pirates!
Go Pirates!
Go Pirates!
9 – Cheers!
%
