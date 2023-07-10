#include "main.h"
/**
 *jack_bauer - print every minute of the day
 *
 * Return: Null
 */

void jack_bauer(void)
{
	int first_hour = 48;
	int second_hour;
	int first_minute;
	int second_minute;

	while (first_hour < 51)
	{
		second_hour = 48;
		while (second_hour < 52)
		{
			first_minute = 48;
			while (first_minute < 54)
			{
				second_minute = 48;
				while (second_minute < 58)
				{
					_putchar(first_hour);
					_putchar(second_hour);
					_putchar(':');
					_putchar(first_minute);
					_putchar(second_minute);
					_putchar('\n');
					second_minute++;
				}
				first_minute++;
			}
			second_hour++;
		}
		first_hour++;
	}
	_putchar('\n');
}
