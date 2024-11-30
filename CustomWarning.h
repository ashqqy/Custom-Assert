#ifndef CUSTOM_WARNING_H
#define CUSTOM_WARNING_H

#include <stdio.h>

// soft assert
#define CustomWarning(expression, return_message) do                                                      \
{                                                                                                         \
    if (expression == 0)                                                                                  \
    {                                                                                                     \
        printf ("%s: %s:%d: Expression `%s' warning.\n", __FUNCTION__, __FILE__, __LINE__, #expression ); \
        return return_message;                                                                            \
    }                                                                                                     \
}                                                                                                         \
while (0)                                                                                                 \

#endif // CUSTOM_WARNING_H