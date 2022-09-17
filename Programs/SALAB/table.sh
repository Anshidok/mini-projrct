echo "Enter a number"
read n
i=1
while [ $i -le 10 ]
do
c=`expr $n \* $i`
echo "$n * $i = $c"
i=`expr $i + 1`
done
