#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of the day in
 * the format HH:MM
 */
void jack_bauer(void)
{
	int hour, minute;

	/* Travels by every hour of the day (0 to 23) */
	for (hour = 0; hour < 24; hour++)
	{
		/* Travels by every minute of the day (0 to 59) */
		for (minute = 0; minute < 60; minute++)
		{
			/* Prints the hour (HH) */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			/* Prints the separator ':' */
			_putchar(':');

			/* Prints the minute (MM) */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			/* Prints a new line */
			_putchar('\n');
		}
	}
}
