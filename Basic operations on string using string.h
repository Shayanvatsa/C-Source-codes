#include<stdio.h>
void main()
{
    char str1[50],str2[50];
    int ch,len,i,j;
        printf("\tMENU\n");
        printf("1.Find Length of String\n2.Concatenate Strings\n3.Copy String\n4.Compare Strings\n5.Exit");
        printf("\nEnter your choice= ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter a string= ");
                    scanf("%s", str1);
                    for (i = 0; str1[i] != '\0'; i++)
                    {
                        len++;
                    }
                    printf("The length of the string=%d",len);
                    break;
            case 2: 
                    printf("\nEnter First String= ");
                    scanf("%s",str1);
                    printf("Enter Second string= ");
                    scanf("%s",str2);
                    while(str1[i]!='\0')
                    i++;
                    while(str2[j]!='\0')
                    {
                        str1[i]=str2[j];
                        j++;
                        i++;
                    }
                    str1[i]='\0';
                    printf("\nConcatenated String is %s",str1);
                    break;
            case 3:
                    printf("\nEnter First String= ");
                    scanf("%s",str1);
                    printf("Enter Second string= ");
                    scanf("%s",str2);
                    i = 0;
                    while (str1[i] != '\0') 
                    {
                    str2[i] = str1[i];
                    i++;
                    }
                    str2[i] = '\0';
                    printf("\nCopied String= %s ", str2);
                    break;
            case 4:
                    printf("\nEnter First String= ");
                    scanf("%s",str1);
                    printf("Enter Second string= ");
                    scanf("%s",str2);
                    i = 0;
                    while (str1[i] == str2[i] && str1[i] != '\0')
                    i++;
                    if (str1[i] > str2[i])
                    printf("str2 is greater than str1");
                    else if (str1[i] < str2[i])
                    printf("str1 is greater than str2");
                    else
                    printf("str1 is equal to str2");
                    break;
            case 5:
                   exit(0);
                   break;
            default:
                    printf("Invalid input");
        }
}
