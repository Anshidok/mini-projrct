clear
echo "enter first no "
read n1
echo "enter second no"
read n2
echo "enter third no"
read n3
if [ $n1 -ge $n2 ] && [ $n1 -ge $n3 ]
then
echo "...Largest =   $n1 "
elif [ $n2 -ge $n1 -a $n2 -ge $n3 ]
then
echo "....Largest=   $n2"
else
echo "....Largest = $n3"
fi
