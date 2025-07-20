#include <unistd.h>

int	ft_abs(int x)
{
	return (x < 0 ? -x : x);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_safe(int row, int col, int queen[])
{
	int i;

	i = 0;
	while (i < col)
	{
		if (queen[i] == row || ft_abs(queen[i] - row) == ft_abs(i - col))
			return (0);
		i++;
	}
	return (1);
}

void	print_solution(int queen[])
{
	int i = 0;
	while (i < 10)
	{
		ft_putchar(queen[i] + '0');
		i++;
	}
	ft_putchar('$');
	ft_putchar('\n');
}

void	solve(int col, int queen[], int *count)
{
	int row;

	if (col == 10)
	{
		print_solution(queen);
		(*count)++;
		return;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(row, col, queen))
		{
			queen[col] = row;
			solve(col + 1, queen, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int queen[10];
	int count;

	count = 0;
	solve(0, queen, &count);
	return (count);
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
} 