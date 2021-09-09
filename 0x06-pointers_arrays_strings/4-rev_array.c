/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * main - check the code
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
