// int len1, len2;
// 	int i = 0;
// 	int j = 0;
// 	char *ptr;

// 	for (len1 = 0;s1 && s1[len1]; len1++){}
// 	for (len2 = 0;s2 && s2[len2]; len2++){}
// 	if (n < len2)
// 	{
// 		ptr = malloc(sizeof(char) * (len1 + n + 1));
// 	}
// 	else
// 	{
// 		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
// 	}
// 	if (!ptr)
// 	{
// 		return (NULL);
// 	}
// 	while (i < len1)
// 	{
// 		ptr[i] = s1[i];
// 		i++;
// 	}
// 	while (n < len2 && i < len1 + n)
// 	{
// 		ptr[i++] = s2[j++];
// 	}
// 	while (n >= len2 && i < (len1 + len2))
// 	{
// 		ptr[i++] = s2[j++];
// 	}

// 	ptr[i] = '\0';

// 	return (ptr);