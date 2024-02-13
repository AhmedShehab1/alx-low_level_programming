#include "main.h"
/**
 * create_file - Creates A File
 * @filename: Name Of File To Be Created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, Written_Bytes, LenOfString = 0;

	while (text_content[LenOfString] > 0)
	LenOfString++;
	fd = open(filename, O_CREAT, 0600);
	if (fd == -1 && errno == EEXIST)
	{
		fd = open(filename, O_WRONLY);
		if (fd == -1)
		return (fd);
		truncate(filename, 0);
		if (text_content == NULL)
			Written_Bytes = write(fd, "", sizeof(char));
		else
		Written_Bytes = write(fd, text_content, LenOfString);
		if (Written_Bytes == -1)
		return (-1);
		return (1);
	}
	if (fd == -1)
	return (fd);
	fd = open(filename, O_WRONLY);
	if (fd == -1)
	return (fd);
	if (text_content == NULL)
	Written_Bytes = write(fd, "", sizeof(char));
	else
	Written_Bytes = write(fd, text_content, LenOfString);
	if (Written_Bytes == -1)
	return (-1);
	return (1);
}
