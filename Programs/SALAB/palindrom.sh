echo "enter a number "
read n
a=$"n" 
rev=0
while [ $n -gt 0 ]
do
rem=`expr $n % 10`
rev=`expr $rev \* 10 + $rem`
n=`expr $n / 10`
done
echo "the reverse of $a is.. $rev"
if test $rev = $a
then
echo "Yes.. !! $a is a Palindrome..:"
else
echo "No.. !! $a is not a palindrome..:"
echo ""
fi

