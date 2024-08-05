#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int Letter_check(string text1);
int Word_check(string text2);
int Sentence_check(string text3);

int main(void)
{
    string text = get_string("Text: ");
    int letter = Letter_check(text);
    int word = Word_check(text);
    int sentence = Sentence_check(text);

    float L = (letter / (float) word) * 100;
    float S = (sentence / (float) word) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }

    return 0;
}

int Letter_check(string text1)
{
    int letter0 = 0;
    int len_text = strlen(text1);
    for (int i = 0; i < len_text; i++)
    {
        if (isalpha(text1[i]))
        {
            letter0++;
        }
    }
    return letter0;
}

int Word_check(string text2)
{
    int word0 = 1;
    int len_text = strlen(text2);
    for (int i = 0; i <= len_text; i++)
    {
        if ((text2[i] == ' ') && (i > 0 && text2[i - 1] != ' '))
        {
            word0++;
        }
    }
    return word0;
}

int Sentence_check(string text3)
{
    int sentence0 = 0;
    int len_text = strlen(text3);
    for (int i = 0; i <= len_text; i++)
    {
        if (text3[i] == '.' || text3[i] == '!' || text3[i] == '?')
        {
            sentence0++;
        }
    }
    return sentence0;
}
