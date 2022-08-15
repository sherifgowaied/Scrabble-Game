#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    // stringlenght of word 1 and word 2
    int n1 = strlen(word1);
    int n2 = strlen(word2);
    // make word1 and word2 in lowwercase
    for (int i = 0  ; i < n1 ; i++)
    {
        word1[i] = tolower(word1[i]);
    }
    for (int i = 0  ; i < n2 ; i++)
    {
        word2[i] = tolower(word2[i]);
    }
    //ingonre charcter expect a to z
    for (int i = 0 ; i < n1 ; i++)
    {
        if (word1[i] < 'a' || word1[i] > 'z')
        {
            word1[i] = '0' ;
        }
        if (word2[i] < 'a' || word2[i] > 'z')
        {
            word2[i] = '0' ;
        }
        
    }
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 < score2)
    {
        printf("player 2 wins !");
    }
    else if (score1 > score2)
    {
        printf("player 1 wins !");
    }
    else
    {
        printf("tie!");
    }
    printf("\n");
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sum = 0 ;
    for (int i = 0, n = strlen(word) ; i < n ; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {    
            
            int x = (int)(word[i] - 97) ;
            sum = sum + POINTS[x] ;
        }
    }
    return sum ;
}