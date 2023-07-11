#include "main.h"
/**
 *jack_bauer - print every minute of the day
 *
 * Return: Null
 */

void jack_bauer(void)
{
	int f_hour;
	int s_hour;
	int f_minute;
	int s_minute;

	for (f_hour = 0; f_hour < 3; f_hour++)
	{
		for (s_hour = 0; s_hour < 4; s_hour++)
		{
			for (f_minute = 0; f_minute < 6; f_minute++)
			{
				for (s_minute = 0; s_minute < 10; s_minute++)
				{
					_putchar('0' + f_hour);
					_putchar('0' + s_hour);
					_putchar(':');
					_putchar('0' + f_minute);
					_putchar('0' + s_minute);
					_putchar('\n');
				}
			}
		}
	}

}
