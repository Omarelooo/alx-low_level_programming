#include "main.h"

/**
 * read_textfile - unction that reads a text file and prints it to the POSIX standard output.
 *
 * @filename: the file name
 * @letters: the number of letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fb;
    ssize_t count;
    char buf[READ_BUF_SIZE * 8];

    if (!filename || !letters)
        return (0);

    fb = open(filename, O_RDONLY);
    if (fb == -1)
        return (0);

    count = read(fb ,&buf[0] ,letters);
    count = write(STDOUT_FILENO , &buf[0] ,count);
    close(fb);

    return (count);
}
