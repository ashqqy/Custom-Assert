#ifndef CUSTOM_ASSERT_H
#define CUSTOM_ASSERT_H

#include <stdio.h>
#include <stdlib.h>

// soft assert
#define CustomWarning(expression, return_message) do                                                      \
{                                                                                                         \
    if (!(expression))                                                                                    \
    {                                                                                                     \
        printf ("%s: %s:%d: Expression `%s' warning.\n", __FUNCTION__, __FILE__, __LINE__, #expression ); \
        return return_message;                                                                            \
    }                                                                                                     \
}                                                                                                         \
while (0)                                                                                                 \

// hard assert
#define CustomAssert(expression) do                                                                       \
{                                                                                                         \
    if (!(expression))                                                                                    \
    {                                                                                                     \
        printf ("%s: %s:%d: Assertion `%s' failed.\n", __FUNCTION__, __FILE__, __LINE__, #expression );   \
        printf ("Program aborting\n");                                                                    \
        abort();                                                                                          \        \
    }                                                                                                     \
}                                                                                                         \
while (0)                                                                                                 \

#endif // CUSTOM_ASSERT_H
