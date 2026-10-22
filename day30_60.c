//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
    int a[100],n,i,p=0,neg=0,z=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            p++;
        else if(a[i]<0)
            neg++;
        else
            z++;
    }
    printf("Positive = %d\n",p);
    printf("Negative = %d\n",neg);
    printf("Zero = %d",z);
    return 0;
}
