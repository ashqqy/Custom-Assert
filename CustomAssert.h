#ifndef CUSTOM_ASSERT_H
#define CUSTOM_ASSERT_H

#include <stdio.h>
#include <stdlib.h>

// soft assert
#define CustomWarning(expression, return_message) do                                                               \
{                                                                                                                  \
    if (!(expression))                                                                                             \
    {                                                                                                              \
        fprintf (stderr, "%s: %s:%d: Expression `%s' warning.\n", __FUNCTION__, __FILE__, __LINE__, #expression);  \
        return return_message;                                                                                     \
    }                                                                                                              \
}                                                                                                                  \
while (0)                                                                                                          \

// hard assert
#define CustomAssert(expression) do                                                                              \
{                                                                                                                \
    if (!(expression))                                                                                           \
    {                                                                                                            \
        fprintf (stderr, "%s: %s:%d: Assertion `%s' failed.\n", __FUNCTION__, __FILE__, __LINE__, #expression);  \
        fprintf (stderr, "Program aborting\n");                                                                  \
        exit(EXIT_FAILURE);                                                                                      \
    }                                                                                                            \
}                                                                                                                \
while (0)                                                                                                        \

#endif // CUSTOM_ASSERT_H
