# Background
In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.</br>

A  &nbsp;B  &nbsp;C  &nbsp;D  &nbsp;E  &nbsp;F  &nbsp;G  &nbsp;H  &nbsp;I  &nbsp;J  &nbsp;K  &nbsp;L  &nbsp;M  &nbsp;N  &nbsp;O  &nbsp;P  &nbsp;Q  &nbsp;R  &nbsp;S  &nbsp;T  &nbsp;U  &nbsp;V  &nbsp;W  &nbsp;X  &nbsp;Y  &nbsp;Z</br>
1 &nbsp;	3 &nbsp;	3 &nbsp;	2 &nbsp;	1	 &nbsp;4	 &nbsp;2 &nbsp;	4 &nbsp;	1 &nbsp;	8 &nbsp;	5 &nbsp;	1 &nbsp;	3 &nbsp;	1 &nbsp;	1 &nbsp;	3 &nbsp;	10 &nbsp;	1 &nbsp;	1 &nbsp;	1 &nbsp;	1 &nbsp;	4 &nbsp;	4 &nbsp;	8 &nbsp;	4 &nbsp;	10
</br>
For example, if we wanted to score the word Code, we would note that in general Scrabble rules, the C is worth 3 points, the o is worth 1 point, the d is worth 2 points, and the e is worth 1 point. Summing these, we get that Code is worth 3 + 1 + 2 + 1 = 7 points.</br>

# Implementation Details
Complete the implementation of scrabble.c, such that it determines the winner of a short scrabble-like game, where two players each enter their word, and the higher scoring player wins.</br>

Notice that we’ve stored the point values of each letter of the alphabet in an integer array named POINTS.
For example, A or a is worth 1 point (represented by POINTS[0]), B or b is worth 3 points (represented by POINTS[1]), etc.
Notice that we’ve created a prototype for a helper function called compute_score() that takes a string as input and returns an int. Whenever we would like to assign point values to a particular word, we can call this function. Note that this prototype is required for C to know that compute_score() exists later in the program.</br>
In main(), the program prompts the two players for their words using the get_string() function. These values are stored inside variables named word1 and word2.</br>
In compute_score(), your program should compute, using the POINTS array, and return the score for the string argument. Characters that are not letters should be given zero points, and uppercase and lowercase letters should be given the same point values.
For example, ! is worth 0 points while A and a are both worth 1 point.</br>
Though Scrabble rules normally require that a word be in the dictionary, no need to check for that in this problem!
In main(), your program should print, depending on the players’ scores, Player 1 wins!, Player 2 wins!, or Tie!.</br>
Walkthrough


# How to Test Your Code
Your program should behave per the examples below.</br>

$ ./scrabble</br>
Player 1: Question?</br>
Player 2: Question!</br>
Tie!</br>
$ ./scrabble</br>
Player 1: Oh,</br>
Player 2: hai!</br>
Player 2 wins!</br>
$ ./scrabble</br>
Player 1: COMPUTER</br>
Player 2: science</br>
Player 1 wins!</br>
$ ./scrabble</br>
Player 1: Scrabble</br>
Player 2: wiNNeR</br>
Player 1 wins!</br>
