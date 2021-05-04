
int remove_duplicate(int a[],int n){
        // code here
        int i,j,k;
		for(i = 0; i < n; i++)
			{
				for(j = i+1; j < n; )
				{
				    if(a[j] == a[i])
				    {
				        for(k = j; k < n; k++)
				        {
				            a[k] = a[k+1];
				        }
				        n--;
				    }
				    else
				    {
				        j++;
				    }
				}
			}
		}
