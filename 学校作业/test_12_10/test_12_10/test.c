#define _CRT_SECURE_NO_WARNINGS 1
int is_alpha(char s)
{
	if (s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z')
		return 1;
	return 0;
}
int search(char a[], int* l)
{
	int i, s = 0, leng1, leng2 = 0, j = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ' && is_alpha(a[i]) == 1) s++;
		else
		{
			leng1 = leng2;
			leng2 = s;
			if (leng2 > leng1) {
				j = i - s;
				*l = leng2;
			}
			s = 0;
		}
	}
	leng1 = leng2;
	leng2 = s;
	if (leng2 > leng1) {
		j = i - s;
		*l = leng2;
	}
	return j;
}
