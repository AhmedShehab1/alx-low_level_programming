#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: FileName To Read From
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it That Was Readed And Printed
*/
ssize_t read_textfile(const char *filename, size_t  letters)
{
	ssize_t Bytes_readed, Bytes_Writed;
	int fd;
	char *Buffer;

	Buffer = malloc(letters);
	if (Buffer == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (filename == (void *)0 || fd == -1)
	{
		return (0);
	}
	Bytes_readed = read(fd, Buffer, letters);
	if (Bytes_readed == -1)
	{
		return (0);
	}
	Bytes_Writed = write(STDOUT_FILENO, Buffer, Bytes_readed);
	if (Bytes_readed != Bytes_Writed || Bytes_Writed == -1)
	{
		return (0);
	}
	close(fd);
	return (Bytes_Writed);
}
