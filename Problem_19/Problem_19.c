/*
 * Problem_19.c
 *
 *  Created on: 15-Dec-2016
 *      Author: Chirag R Patel
 *
 * Counting Sundays:
 *
 * You are given the following information, but you may prefer to do some research for yourself.
 *
 * 1 Jan 1900 was a Monday.
 *
 * Thirty days has April, June, September and November.
 * All the rest have thirty-one,
 * Saving February alone, Which has twenty-eight, rain or shine. And on leap years, twenty-nine.
 *
 * A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
 *
 * How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
 */

#include <stdio.h>
#include <math.h>

int today = 0, SundayOnFirst = 0;

int CheckLeapYear(int y)
{
	int flag;

	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			// y is divisible by 400, hence the y is a leap y
			if (y % 400 == 0)
				flag = 1;
			else
				flag = 0;
		}
		else
			flag = 1;
	}
	else
		flag = 0;

	return flag;
}

int CountDays(int m, int f)
{
	int d;
	if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
		d = 30;
	else if (m == 2)
	{
		if (f == 1)
			d = 29;
		else
			d = 28;
	}
	else
		d = 31;

	return d;
}

int CheckNumberOfSunday(int F)
{
	int month, max, i, sunday = 0;
	for (month = 1; month <= 12; ++month)
	{
		max = CountDays(month, F);
		for (i = 1; i <= max; ++i)
		{
			today++;
			if (today == 7)
			{
				if (i == 1)
					SundayOnFirst++;
				sunday++;
				today = 0;
				continue;
			}
		}
	}
	return sunday;
}

int LastDay(int YeaR)
{
	int FlaG, MontH, MaX, I, DaY = 0;
	FlaG = CheckLeapYear(YeaR);

	for (MontH = 1; MontH <= 12; ++MontH)
	{
		MaX = CountDays(MontH, FlaG);
		for (I = 1; I <= MaX; ++I)
		{
			DaY++;
			if (DaY == 7)
			{
				DaY = 0;
				continue;
			}
		}
	}
	return DaY;
}

int main(int argc, char **argv)
{
	int Lastday, year, flag = 0, Sunday = 0;

	Lastday = LastDay(1900);
	printf("Last Day of 1990 is: %d\n", Lastday);

	today = Lastday;

	for (year = 1901; year <= 2000; ++year)
	{
		flag = CheckLeapYear(year);
		if (flag == 1)
			printf("%d is Leap year\n", year);
		else
			printf("%d is not a Leap year\n", year);

		Sunday = CheckNumberOfSunday(flag);
		printf("Number of Sundays in %d = %d\n", year, Sunday);
		printf("Number of Sunday fell on the first of the month is: %d\n\n", SundayOnFirst);
	}
	return 0;
}
