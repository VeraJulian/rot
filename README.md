# rot
Write a program, rot.c, that echoes the input as output, moving alphabetic characters n steps forward in the
alphabet (wrapping around, as necessary). Notice that rot 13 is its own inverse.
% echo ’Bar nun: tang ant pho she try!’ | rot 13
One aha: gnat nag cub fur gel!
% echo "(MAR) Jr. Esq: rum ice" | rot 2
(OCT) Lt. Gus: two keg
% rot -13 </dev/null
%
Hints & worries: fgetc, fputc, atoi, argc/argv.
