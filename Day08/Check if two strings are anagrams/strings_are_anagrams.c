int	is_anagram(char *a, char*b)
{ 

int count[256] = {0};
int i = 0;

while (a[i] != '\0' )
{
	count[a[i]]++;
	i++;
}
i = 0;
while (b[i] != '\0')
{
	count[b[i]]--;
	i++;

}
for (int i = 0; i < 256; i++)
{
	if (count[i] != 0)
		return 0;
}
return 1;
	
}

#include <stdio.h>

int main(void)
{
    char s1[] = "aab";
    char s2[] = "aba";

    if (is_anagram(s1, s2))
        printf("Anagram\n");
    else
        printf("Not anagram\n");

    return 0;
}

