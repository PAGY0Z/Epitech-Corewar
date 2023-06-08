/*
** EPITECH PROJECT, 2023
** B-CPE-200-RUN-2-1-corewar-pierre-alexandre.grosset
** File description:
** parsing_01_live
*/

#include "asm_programm_header.h"

////////////////////////////////////////////////////////////////////////////////
/// \file parsing_01_live.c
/// \brief Contains the parsing function for the live operation.
/// \authors PAGY0Z, Amdjadouxx, AxsOne, DarkCat974
/// \version 0.1
/// \date 2023-13-05
////////////////////////////////////////////////////////////////////////////////

bool parsing_01_live(asm_t *asm_struct, char **line);

////////////////////////////////////////////////////////////////////////////////
/// \brief Check if the live operation is well written and add it to the buffer.
/// \param asm_struct The asm struct.
/// \param line The line to parse.
/// \return true if the line was parsed correctly, false otherwise.
/// \note Return false in those cases:
/// \note   - The line is not 2 words long.
/// \note   - The first word is not "live".
/// \note   - The instruction byte could not be added to the buffer.
/// \note   - The second word is not a direct.
////////////////////////////////////////////////////////////////////////////////
bool parsing_01_live(asm_t *asm_struct, char **line)
{
    int cmd_position = asm_struct->index - FULL_HEADER_SIZE;
    if (my_array_len(line) != 2) return false;
    if (!my_strcmp(line[0], "live")) return false;
    if (!add_byte_to_buffer(asm_struct, 0x01)) return false;
    return add_direct(asm_struct, line[1], cmd_position);
}
