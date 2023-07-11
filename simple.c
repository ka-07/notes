#include&lt;stdio.h&gt;
#include&lt;math.h&gt;
void main()
{
float si,ci,p,n,r,c1,c2;
printf(&quot;\n Enter the Principle Amount: &quot;);
scanf(&quot;%f&quot;,&amp;p);
printf(&quot;\n Enter the no of Years: &quot;);
scanf(&quot;%f&quot;,&amp;n);
printf(&quot;\n Enter the Rate of interest: &quot;);
scanf(&quot;%f&quot;,&amp;r);
si=(p*n*r)/100;
c1=1+(r/100);
c2=pow(c1,n);
ci=p*c2;
printf(&quot;\n The SIMPLE INTEREST IS:%2.f&quot;,si);
printf(&quot;\n \n \n The COMPOUND INTEREST IS:%2.f&quot;,ci);
}
