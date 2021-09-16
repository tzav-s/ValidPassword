# ValidPassword
In the case of codes consisting of a large number of digits (eg bank accounts,
payment codes etc) for the security of transactions there should be an easy way
ensure that the user does not enter the digits incorrectly. The way is to add them to the codes
control digits. A simple way to do this is to add 2 check digits at the end
password thus creating the final password. For example:
Initial code (N) Control digits Final code (EN)
12558 60 1255860
55257 03 5525703
Functions - Procedures - page 8 of 11
The control digits of an initial code N (long) are given by the formula:
Control digits = (98 - (N * 100)% 97)% 97 (1)
The validity check of a final EN code is easily calculated by checking whether the EN% 97 transaction has as
result 1, ie given a final code EN this is valid if its integer remainder with
the number 97 is one.
To implement:
(a) An encode function that accepts an initial code (long) and returns the corresponding final
code (long). It is again stated that the final code is derived from the addition at the end of an initial
code of the control digits given by formula (1).
(b) a check function that accepts a final code and returns TRUE if it is valid; and
FALSE otherwise. It is reported again that the test is done by examining whether the integer balance
of the final code with 97 is equal to 1.
(c) a program that accepts two long code limits from the user and displays for each
code between these two limits the initial code, the final code and whether it is valid or not,
according to the following examples. The display of messages will be done through the main
program (main () function, ie the command to display messages (printf) will be in
main ()).
Assume that the user always sets limits greater than 0 and that the lower limit will always be
less than or equal to the upper limit. No control required
