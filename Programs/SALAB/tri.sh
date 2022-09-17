j=1
i=1
while [  $i -le 10 ]
do
j=1
temp=
while [ $j -le $i ]
do
temp=$temp"  "$j
j=`expr $j + 1`
done
echo "$temp"
i=`expr $i + 1`
done
