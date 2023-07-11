#include<stdio.h>
#include<conio.h>
struct process
{
	int pro;
    int brt;
    int tt;
    int wt;
    int pr;
};

int main()
{
	int i,j,n,t,totwt,tottt;
    float avgwt,avgtt;
    int prevtt;
    printf("\n\t\t\t PRIORITY SCHEDULING");
    printf("\n\n Enter the no of process:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	pr[i].pro = i;
        printf("\nProcess no: %d ",pr[i].pro);
        printf("\nEnter burst time:");
        scanf("%d",&pr[i].brt);
        printf("\nEnter Priority:");
        scanf("%d",&pr[i].pri);
    }
 
for(i=1;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
        if(pr[i].pri> pr[j].pri)
        {
        	t= pr[j].pro;
            pr[j].pro= pr[i].pro;
            pr[i].pro=t;
    
            t= pr[j].brt;
            pr[j].brt= pr[i].brt;
            pr[i].brt=t;
    
            t= pr[j].pri;
            pr[j].pri= pr[i].pri;
            pr[i].pri=t;
        }  
    }   
}

prevtt =0;
for(i=1;i<=n;i++)
{
	pr[i].wt=prevtt;
    pr[i].tt=pr[i].wt+pr[i].brt;
    prevtt = pr[i].tt;
}

printf("\n PROCESS NO \t BURST TIME \t WAITING TIME \t TURN AROUND TIME");
printf("\n ------------- \t ------------- \t---------- \t --------------");

totwt=0;
tottt=0;
for(i=1;i<=n;i++)
{
	printf("\n\t%d\t\t%d\t\t%d\t\t%d",pr[i].pro,pr[i].brt,pr[i].wt,pr[i].tt);
    totwt=totwt+pr[i].wt;
    tottt=tottt+pr[i].tt;
}

avgwt=(float)totwt/n;
avgtt=(float)tottt/n;

printf("\n\n Average Waiting time:%6.2f",avgwt);
printf("\n\n Average Turnaround Time:%6.2f\n\n",avgtt);


for(i=1;i<=pr[n].tt;i++)
{
	printf("-");
}
printf("\n");

j=pr[1].wt;
printf("%d",j);
for(i=1;i<=n;i++)
{
	printf("%*d",pr[i].brt,pr[i].tt);
}

printf("\n");

for(i=1;i<=pr[n].tt;i++)
{
	printf("-");
}
printf("\n");
getch();
return 0;

}
