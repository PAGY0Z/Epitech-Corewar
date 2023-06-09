/*
** EPITECH PROJECT, 2023
** PAGYOZ' Clib. Check it out at : https://github.com/PAGY0Z/my_lib_c
** File description:
** macros_header
*/

////////////////////////////////////////////////////////////////////////////////
/// \file macros_header.h
/// \brief Contains all the macros of the library.
/// \authors PAGY0Z
/// \version 0.1
/// \date 2023-23-04
////////////////////////////////////////////////////////////////////////////////

#ifndef MACROS_HEADER_H_
    #define MACROS_HEADER_H_

    ////////////////////////////////////////////////////////////////////////////
    /// \addtogroup LIBRARY
    /// \brief Contains all the files of the library.
    /// @{
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// \addtogroup LIBRARY_MACROS
    /// \brief The macros that handle attributes.
    /// @{
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// \addtogroup LIBRARY_MACRO_ATTRIBUTES
    /// \brief The macros that handle attributes.
    /// @{
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Remove the warning of unused parameters
    /// \def UNUSED
    /// \attention This macro should be used next to the params of a function
    ///////////////////////////////////////////////////////////////////////////
    #define UNUSED __attribute__((unused))

    ////////////////////////////////////////////////////////////////////////////
    /// @}
    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    /// \addtogroup LIBRARY_MACRO_BOOLEANS
    /// \brief The macros that handle booleans.
    /// @{
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is a LOWERCASE character
    /// \def IS_LOWER
    /// \param x The character to check
    /// \return TRUE if the character is a LOWERCASE character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_LOWER(x) ((x) >= 'a' && (x) <= 'z')

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is a UPPERCASE character
    /// \def IS_UPPER
    /// \param x The character to check
    /// \return TRUE if the character is a UPPERCASE character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_UPPER(x) ((x) >= 'A' && (x) <= 'Z')

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is a ALPHABETIC character
    /// \def IS_ALPHA
    /// \param x The character to check
    /// \return TRUE if the character is a ALPHABETIC character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_ALPHA(x) (IS_LOWER(x) || IS_UPPER(x))

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is a NUMERIC character
    /// \def IS_NUM
    /// \param x The character to check
    /// \return TRUE if the character is a NUMERIC character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_NUM(x) ((x) >= '0' && (x) <= '9')

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is an ALPHANUMERIC character
    /// \def IS_ALPHANUM
    /// \param x The character to check
    /// \return TRUE if the character is an ALPHANUMERIC character,
    ///         FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_ALPHANUM(x) (IS_ALPHA(x) || IS_NUM(x))

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is a PRINTABLE character
    /// \def IS_PRINTABLE
    /// \param x The character to check
    /// \return TRUE if the character is a PRINTABLE character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_PRINTABLE(x) ((x) >= ' ' && (x) <= '~')

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is a SIGN character
    /// \def IS_SIGN
    /// \param x The character to check
    /// \return TRUE if the character is a SIGN character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_SIGN(x) ((x) == '-' || (x) == '+')

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a character is an EMPTY_CHAR character
    /// \def IS_EMPTY_CHAR
    /// \param x The character to check
    /// \return TRUE if the character is a EMPTY_CHAR character, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_EMPTY_CHAR(c) ((c == ' ' || c == '\t'))

    ////////////////////////////////////////////////////////////////////////////
    /// @}
    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    /// \addtogroup LIBRARY_MACRO_MATHS
    /// \brief The macros that handle maths.
    /// @{
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Return the ABSOLUTE value of a number
    /// \def ABS
    /// \param x The number to convert
    /// \return The ABSOLUTE value of the number
    ////////////////////////////////////////////////////////////////////////////
    #define ABS(x) ((x) < 0 ? -(x) : (x))

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a number is NEGATIVE
    /// \def IS_NEGATIVE
    /// \param x The number to check
    /// \return TRUE if the number is NEGATIVE, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_NEGATIVE(x) ((x) < 0)

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a number is POSITIVE
    /// \def IS_POSITIVE
    /// \param x The number to check
    /// \return TRUE if the number is POSITIVE, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_POSITIVE(x) ((x) > 0)

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a number is EVEN
    /// \def IS_EVEN
    /// \param x The number to check
    /// \return TRUE if the number is EVEN, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_EVEN(x) ((x) % 2 == 0)

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Check if a number is ODD
    /// \def IS_ODD
    /// \param x The number to check
    /// \return TRUE if the number is ODD, FALSE otherwise
    ////////////////////////////////////////////////////////////////////////////
    #define IS_ODD(x) ((x) % 2 != 0)

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Returns the MINIMUM of two numbers
    /// \def MIN
    /// \param x The first number
    /// \param y The second number
    /// \return The MINIMUM of the two numbers
    ////////////////////////////////////////////////////////////////////////////
    #define MIN(x, y) ((x) < (y) ? (x) : (y))

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Returns the MAXIMUM of two numbers
    /// \def MAX
    /// \param x The first number
    /// \param y The second number
    /// \return The MAXIMUM of the two numbers
    ////////////////////////////////////////////////////////////////////////////
    #define MAX(x, y) ((x) > (y) ? (x) : (y))

    ////////////////////////////////////////////////////////////////////////////
    /// @}
    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    /// \addtogroup LIBRARY_MACRO_BITS_MANIPULATION
    /// \brief The macros that handle bits manipulation.
    /// @{
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Returns the BIGGEST byte of a number
    /// \def GET_BIGGEST_BYTE
    /// \param x The number
    /// \return The BIGGEST byte of the number
    ////////////////////////////////////////////////////////////////////////////
    #define GET_BIGGEST_BYTE(x) ((x) >> 24) & 0xff

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Returns the BIG byte of a number
    /// \def GET_BIG_BYTE
    /// \param x The number
    /// \return The BIG byte of the number
    ////////////////////////////////////////////////////////////////////////////
    #define GET_BIG_BYTE(x) ((x) >> 16) & 0xff

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Returns the SMALL byte of a number
    /// \def GET_SMALL_BYTE
    /// \param x The number
    /// \return The SMALL byte of the number
    ////////////////////////////////////////////////////////////////////////////
    #define GET_SMALL_BYTE(x) ((x) >> 8) & 0xff

    ////////////////////////////////////////////////////////////////////////////
    /// \brief Returns the SMALLEST byte of a number
    /// \def GET_SMALLEST_BYTE
    /// \param x The number
    /// \return The SMALLEST byte of the number
    ////////////////////////////////////////////////////////////////////////////
    #define GET_SMALLEST_BYTE(x) ((x)) & 0xff

    ////////////////////////////////////////////////////////////////////////////
    /// @}
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// @}
    ////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////
    /// @}
    ////////////////////////////////////////////////////////////////////////////

#endif /* !MACROS_HEADER_H_ */
