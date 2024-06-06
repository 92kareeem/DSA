
case 2:
{
pop()
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\t EXIT POINT");
break;
}
default:
{
printf("\n\t Please enter a valid choice(1/2/3/4)");
}
}
while (choice!=4);
return 0;
}
void push()
{
if(top>=(n-1))

