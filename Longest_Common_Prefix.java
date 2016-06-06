public String lcp(String[] str)
{
if(str==null||str.length==0
return "";
if(str.length==1)
return str[0];
int min=str.length+1;
for(String s:str)
if(min>s.length())
{
min=s.length();
}
}
for(int i=0;i<min;i++)
{
for(j=0;j<str.length-1;j++)
{
String s1=str[j];
String s2=str[j+1];
if(s1.charAt(i)!=s2.charAt(i)
{
return s1.substring(0,i);
}
}
}
return str[0].substring(0.min);
}
