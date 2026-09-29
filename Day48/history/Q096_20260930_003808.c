#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char sentence[200];
    char *start, *end;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    start = sentence;
    end = sentence;

    while (*end != '\0')
    {
        if (*end == ' ')
        {
            if (end > start)
                reverseWord(start, end - 1);
            start = end + 1;
        }
        end++;
    }

    if (end > start)
        reverseWord(start, end - 1);

    printf("Reversed words: %s\n", sentence);

    return 0;
}
