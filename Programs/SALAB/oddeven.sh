clear
#even or odd
echo "Enter a number"
read num
r=`expr $num % 2`
if test $r = 0;
then
        echo "The number is even"
else
        echo "The no  is odd "
fi

