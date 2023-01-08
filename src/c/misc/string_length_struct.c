#include <stdio.h>
#include <string.h> // strlen

struct message_struct
{
    char text[10]; // can hold maximum of 9 characters, plus the null `\0`
                   // character to signify the end of string
    int length;
};

int main()
{
    struct message_struct message = {"hello", 5};
    printf("Message: %s\nLength = %d\n", message.text, message.length);
    printf("Length using built-in method = %lu\n", strlen(message.text));
    return 0;
}
