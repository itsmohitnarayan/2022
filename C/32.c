int cnt=0;
void my_recursive_function(int n)
{
    if(n==0)
        return;
    cnt++;
    my_recursive_function(n/10);

}
void main (){
    my_recursive_function(3456);
    printf("%d",cnt);
}