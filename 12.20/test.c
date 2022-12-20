#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n;
//	int i;
//	scanf("%d", &n);
//	int arr[100];
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < n-1;i++)
//	{
//		if (arr[i + 1] - arr[i] >= 0)
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//
//	}
//	if (count1 == n - 1 || count2 == n - 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[100];
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int insert;
//	scanf("%d", &insert);
//	for (i=n-1;i>=0;i--)
//	{
//		if (arr[i] > insert)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = insert;
//			break;
//		}
//	}
//	if (arr[0] > insert)
//	{
//		arr[0] = insert;
//	}
//	for (i = 0;i < n+1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr1[50];
//	int arr2[50];
//	int i;
//	int count = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		if (arr1[i] != del)
//		{
//			arr2[j] = arr1[i];
//			j++;
//			count++;
//		}
//		else
//		{
//			arr2[j] = arr1[i + 1];
//		}
//
//	}
//	for (j = 0;j < count;j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr1[100];
//	int arr2[100];
//	int arr3[100];
//	int i, j;
//	for (i = 0;i < n;i++)
//	{
//		j = 0;
//		scanf("%d", &arr1[i]);
//		arr2[j]=arr1[i];
//		j++;
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				arr3[i] = arr1[i];
//				break;  
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	int j=0；
//	for (i = 0;i < n;i++)
//	{
//		
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0;i < j;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	int i;
//	int flag1 = 0;//默认升序
//	int flag2 = 0;//默认降序
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i + 1] - arr[i] > 0)
//			{
//				flag1 = 1;
//			}
//			else if(arr[i+1]-arr[i]<0)
//			{
//				flag2 = 1;
//			}
//			else
//			{
//				
//			}
//		}
//	}
//	if (flag1 + flag2 == 2)
//	{
//		printf("unsorted\n");
//	}
//	else
//	{
//		printf("sorted\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000];
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < n;i++)
//	{
//		//去重
//		int j;
//		for (j = i + 1;j < n;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				int k;
//				for (k = j;k < n-1;k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//
//			}
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//		return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i;
//	int j;
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[2000];
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < m;i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//要遍历数组;
//	i = 0;
//	j = 0;
//	int k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k++] = arr1[i++];
//		}
//		else
//		{
//			arr3[k++] = arr2[j++];
//		}
//	}
//	if (i == n)
//	{
//		for (;j < m;j++)
//		{
//			arr3[k++] = arr2[j];
//		}
//	}
//	else
//	{
//		for (;i < n;i++)
//		{
//			arr3[k++] = arr1[i];
//		}
//	}
//	for (i = 0;i < n + m;i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int arr1[1000];
	int arr2[1000];
	int arr3[2000];
	int i, j;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0;i < m;i++)
	{
		scanf("%d", &arr2[i]);
	}
	i = 0;
	j = 0;
	int k = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if (i == n)
	{
		for (;j < m;j++)
		{
			arr3[k++] = arr2[j];
		}
	}
	else
	{
		for (;i < n;i++)
		{
			arr3[k++] = arr1[i];
		}
	}
	for (i = 0;i < n + m;i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}