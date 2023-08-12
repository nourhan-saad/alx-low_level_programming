#include <unistd.h>
/**
 *main - entry point
 *
 *Description: print a quate usint write function
 *writ (int fd.const void buf.size_t count)
 *
 *return: 1 (notsucces)
*/
int main(void)
{
	char que[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, que, 59);

	return (1);
}
