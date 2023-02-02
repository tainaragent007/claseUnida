#iostream
{
    cont=0;
    if(x%2==0)
    {
        tabla[i]=x;
        i++;
    }else{
        vectorP[j]=x;
        j++;
    }
}
cout<<"Vector Par: "<<endl;
for (x=0;x<i;x++)
{
    cout<<tabla[x]<<endl;
}
for (x=0;j<i;x++)
{
    cout<<vectorP[x]<<endl;
}
system("PAUSE");
return 0;
